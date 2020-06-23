#include <graphics.h>
#include <dos.h>
#include <conio.h>

main()
{
   int i, j = 0,c=0, gd = DETECT, gm;

   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");


 line(0,405,640,405);

 line(50,280,50,390); //tree
line(70,280,70,390);
circle(60,260,20);
circle(50,280,20);
circle(70,280,20);

line(40,150,1,80);  //mountain

line(40,150,170,80);
line(300,150,170,80);

line(300,150,400,80);
line(540,150,400,80);

line(540,150,650,80);
line(650,150,650,80);

line(0,150,639,150);

line(0,390,639,390);  //ROAD
   for (i = 0; i <=700; i = i + 10, j++)
   {



      rectangle(250+i,260,350+i,385);
      rectangle(350+i,340,400+i,385);
      circle(275+i,395,10);
      circle(375+i,395,10);

      line(0,405,640,405);
      outtextxy(80+i,350,"POLICE");

      rectangle(0+i,330,50+i,375);
      rectangle(50+i,290,150+i,375);
      rectangle(150+i,330,200+i,375);
      line(50+i,330,200+i,330);
      line(100+i,290,100+i,330);
      circle(50+i,390,15);
      circle(150+i,390,15);
      setcolor(j);
      rectangle(90+i,270,110+i,290);
      setcolor(15);
      delay(150);
 cleardevice();

   }

   getch();
   closegraph();
   return 0;
}