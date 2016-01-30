/* Mika Saari miksa007 github 2016*/

//apt-get install libncurses*
//gcc -o ohjelma main.c -Wall -s -lcurses

#include <ncurses.h>
#include <unistd.h>
//#include <ncurses.h>

int main()
{
  /* Initialize the variables */
  //WINDOW *mywindow;
  int k=1;
  int x;
  int y;
  int xDirect=1;//direction of movement
  int yDirect=1;
    
  
  /* Initialize Curses */	
  // mywindow = initscr();
  initscr();
  /* Make a box */
  //box( mywindow, ACS_VLINE, ACS_HLINE );
  
  /* Guess :) */
  x=2;
  y=2;
  for(k=2;k<1000;k++)
    {
      //clear the screen
      clear();
      //      mvwprintw( mywindow, x, y, "o" );
       mvprintw( x, y, "o" );
      //microseconds
      usleep(500000);
      // is this necessary?
      refresh();
      if(xDirect>0)
	{
	  x++;
	}else
	{
	  x--;
	}
      if(yDirect>0)
	{
	  y++;
	}else
	{
	  y--;
	}
      if(x<2 || x>10)
	{
	  xDirect*=(-1);
	}
      if(y<2||y>20)
	{
	  yDirect*=(-1);
	}
    }
  
  /* Wait for a keystroke */	
  getch();
  
  /* End curses */	
  endwin();
  return 0;
}	

