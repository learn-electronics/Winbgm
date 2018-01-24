#include <graphics.h>




float radius = 100;

int gd = DETECT,
       gm,
       left=300,
       top=100,
       right=500,
       bottom=200,
       x= 300,
       y=150;



int main(void)

{

 initgraph(&gd,&gm,NULL);
 int x1=50,y1=100,x2=100,y2=120,x3=120,y3=130;



  setcolor(RED);
  circle(300,200,200);
  circle(300,200,180);

  floodfill(300,390,YELLOW);

      outtextxy(264,100,"SANTOSH");

      outtextxy(300,390,"6");
      outtextxy(300,0,"12");
      outtextxy(490,200,"3");
      outtextxy(100,200,"9");
      outtextxy(260,280,"Do not waste time");
      setcolor(WHITE);
      line(300,200,x1+300,y1+200);
      setcolor(RED);
      line(300,200,x2+300,y2+200);
      setcolor(GREEN);
      line(300,200,x3+300,y3+200);

getch();

closegraph();

return 0;

 

}



 



