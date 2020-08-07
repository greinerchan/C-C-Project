//
//  Password.c
//  Student Database Management System
//


 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<dos.h>
 #include<string.h>
 void login_window();
 void password_input();

 void main()
 {
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");

 login_window();
 password_input();
 closegraph();

 }
 void login_window()
 {

  /* rectangle for password input */

    setcolor(3);
    setfillstyle(1,WHITE);
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
void password_input()
  {
  int X=206,Y=262;
  char password[10];
  char pass[12]="prashant";
  int i;
  char ch;
  for(i=0;i<12;i++)
  {
  ch=getch();
  password[i]=ch;
  if(ch==13)
  {
    password[i]='\0';
    delay(50);
    for(i=0;i<10;i++)
    {
    sound(99*i);
     /* following coad is to draw the circle Enter Button to give press effect  */
    setcolor(WHITE);
    setfillstyle(1,12);
    circle(442,272,12);
    circle(442,272,11);
    circle(442,272,10);
    floodfill(442,272,WHITE);
delay(19);
    setcolor(WHITE);
    setfillstyle(1,4);
    circle(442,272,12);
    circle(442,272,11);
    circle(442,272,10);
    floodfill(442,272,WHITE);
    nosound();

     }
     delay(1000);

  if(strcmp(pass,password)==0)
  {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\turboc3\\bgi");
    cleardevice();

    delay(1900); /* This dealy for pause thescreen for sometime.   */
    setcolor(15);
    setfillstyle(1,3);
    rectangle(460,249,140,180);
    rectangle(450,240,148,189);
    floodfill(451,241,15);

      for( i=0;i<10;i++)
    {
    sound(999);
    setcolor(0);
    outtextxy(220,210," ACEESS GRANTED ");
    delay(50);
    setcolor(15);
    outtextxy(220,210," ACEESS GRANTED ");
    nosound();

    }

     delay(1500); /*for pause the screen to sometime to display message. */
     break;

  }
  else
  {
   int gd=DETECT,gm, i;
    initgraph(&gd,&gm,"C:\\turboc3\\bgi");

    delay(1400);
    setcolor(15);
    setfillstyle(1,3);
    rectangle(460,249,140,180);
    rectangle(450,240,148,189);
    floodfill(451,241,15);

  /* This for loop is for getting the sound effect */

    for( i=0;i<10;i++)
    {

    sound(999);
    setcolor(0);
    outtextxy(220,210," ACEESS DENIED ");
    delay(99);
    setcolor(15);
    outtextxy(220,210," ACEESS DENIED ");
    nosound();

     }

    delay(2000); /* for pause the screen to sometime to display message. */
    exit(1);

  }

  }

   /* following coad is to check whether the user press backslash or delete
      8 for ascii value of backspace  */

    if(ch==8)
    {
    i--;
    i--;
    X=X-15;
    fflush(stdin);

   /* The following is the restriction for * to print to backward side
      Otherwise the * is printed backward to input box */

    if(X<206)
   {
    X=206;
    }

    setcolor(15);
    settextstyle(2,0,7);
    outtextxy(X,Y,"*");
    X=X-15;
    nosound();

    }

    /* IF YOU PRESS ESC THEN EXITING THE SYSTEM */

    if(ch==27)
    exit();

    if(i>10)
    {
     sound(9999);

     }

    sound(800);
    setcolor(0);
    settextstyle(2,0,7);
    outtextxy(X,Y,"*");

    X=X+15;
    delay(100);
    nosound();

  }

  }
