#include <windows.h>
#include<stdio.h>
#include"opencv/cv.h"
#include"opencv/highgui.h"

int main(int argc, char *argv[])
{
  printf("test\n");
  int i;
  int x; int y;

  SetCursorPos(2000, 2000);
  POINT point;
  GetCursorPos(&point);
  int xmax=point.x;
  int ymax=point.y;

    //deplacer le curseur en diagonal
  for(i = 0; i<=10; i++){
      x=100*i+25*i;
      y=100*i;
      SetCursorPos(x, y);
      Sleep(1000);

  }
/*
  x=1025;
  y=600;
  SetCursorPos(x, y);

  //click droit
  mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
  mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);

  Sleep( 2000milliseconds);
  y--;
  SetCursorPos(x, y);

  //click gauche
  mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
  mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

  Sleep( 2000);
*/

  printf("%ld %ld\n",xmax, ymax);

  Sleep(5000);


  return 0;
}
