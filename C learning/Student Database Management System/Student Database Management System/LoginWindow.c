//
//  LoginWindow.c
//  Student Database Management System
//

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
void login_window();

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

login_window();
getch();

closegraph();

}
void login_window()
{

 /* rectangle for password input */

   setcolor(3);
   setfillstyle(1,WHITE);
   /* create bracket for the login window*/
   rectangle(426,288,201,259);
   rectangle(425,287,202,260);
   floodfill(419,262,3);

   /* RECTANGLE FOR LOGO */

   setcolor(WHITE);
   setfillstyle(10,4);
   rectangle(402,142,224,222);
   rectangle(403,141,223,223);
   rectangle(404,140,222,224);
   floodfill( 400,218,WHITE);

   /* draws 1st body */

   setcolor(WHITE);
   setfillstyle(1,2);
   ellipse(270, 190, 0, 360,10, 18);
   ellipse(270, 190, 0, 360,11, 19);
   floodfill(271,191,WHITE);

   /* draws and fills 2nd body  */

   setfillstyle(1,2);
   ellipse(300, 195, 0, 360,10, 18);
   ellipse(300, 195, 0, 360,9, 17);
   floodfill(301,196,WHITE);

   /* draws 3rd body */

     setfillstyle(1,2);
     ellipse(320, 199, 0, 360,8, 12);
     ellipse(320, 199, 0, 360,7, 11);
     floodfill(321,200,WHITE);

   /* draw 4th body */

   setfillstyle(1,2);
   ellipse(340, 190, 0, 360,11, 25);
   ellipse(340, 190, 0, 360,10, 24);
   floodfill(341,191,WHITE);

   /* draws head for 1st body */

   setcolor(WHITE);
   setfillstyle(1,2);
   circle(270,152,9);
   circle(270,152,8);
   floodfill(271,153,WHITE);

  /* draws head for 2nd body */

   setcolor(WHITE);
   setfillstyle(1,2);
   circle(300,160,9);
   circle(300,160,8);
   floodfill(301,161,WHITE);

  /* draws a head for 3rd body */

    setcolor(WHITE);
    setfillstyle(1,2);
    circle(320,180,4);
    circle(320,180,3);
    floodfill(321,181,WHITE);

  /* draws head for 4th body */

   setcolor(WHITE);
   setfillstyle(1,2);
   circle(340,152,9);
   circle(340,152,8);
   floodfill(341,153,WHITE);

   gotoxy(23,16);
   printf("STUDENT DATABASE MANAGEMENT SYSTEM !");

   /* following coad is to draw the circle Enter Button */

   setcolor(WHITE);
   setfillstyle(1,4);
   circle(442,272,12);
   circle(442,272,11);
   circle(442,272,10);
   floodfill(442,272,WHITE);
   outtextxy(435,269,"->");
   setcolor(WHITE);
   circle(442,272,9);
   setbkcolor(0);
   gotoxy(15,15);
   setcolor(WHITE);
   settextstyle(1,0,1);
   outtextxy(512,98,"x");

   /* 510 for right side increaseo or decrease  /
      120 top increase decrease
      130 left increase decrease
      300 bottom increase decrease
      FOLLWING RECTANLGE JUST ABOVE INNERMOST RECTANGLE */

   setcolor(WHITE);
   rectangle(510,120,130,300);

   /* FOLLOWING IS COAD FOR INNER MOST RECTANGLE */

   setcolor(WHITE);
   setfillstyle(1,3);
   rectangle(531,100,112,321);
   floodfill(530,111,WHITE);

   /* FOLLOWING IS THE COAD FOR OUTERMOST WINDOW  */

   setcolor(8);
   setfillstyle(7,8);
   rectangle(532,99,111,322);
   rectangle(533,98,110,323);
   rectangle(534,97,109,324);
   rectangle(535,96,108,325);
   rectangle(536,95,107,326);
   rectangle(537,94,106,327);
   rectangle(538,93,105,328);
   rectangle(539,92,104,329);
   rectangle(540,91,103,328);
   floodfill(0,0,8);

 }
