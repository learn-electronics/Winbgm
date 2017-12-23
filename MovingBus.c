#include<graphics.h> 

 int gd = DETECT,
       gm,
       left=300,
       top=100,
       right=500,
       bottom=200,
       x= 300,
       y=150,
       radius=20;
 void buildBus(int i);
 void buildStop();
 void buildRoad();
 void addWindow(int i);
 void joinleftTyre(int i);
 void joinrightTyre(int i);
 void animateIt(int i);
 void giveCredit();

int main()
{
  
 int i;
 initgraph(&gd,&gm,NULL);
   for(i=-200;i<300;i=i+10)
 {
   buildStop();
   buildBus(i);
   addWindow(i);
   joinleftTyre(i);
   joinrightTyre(i);
   buildRoad();
   animateIt(i);
 }
  giveCredit();

 
  return 0;
}

void buildStop()
{
   setcolor(70);
   rectangle(27, top-30, 70, top);
   outtextxy(30, top-20 , "STOP");
   setcolor(1);
}

void buildBus(int i){
  rectangle(left-i, top, right-i, bottom);
   setcolor(100);
}

void addWindow(int i){
    rectangle(left+20-i, top+20, left+40-i, top+40);
   rectangle(left+40-i, top+20, left+60-i, top+40);

   rectangle(left+73-i, top+40, left+90-i, bottom-5);
   rectangle(left+90-i, top+40, left+107-i, bottom-5);

   rectangle(left+120-i, top+20, left+140-i, top+40);
   rectangle(left+145-i, top+20, left+165-i, top+40);
   rectangle(left+170-i, top+20, left+190-i, top+40);

   setcolor(1);
}

void joinleftTyre(int i){
   circle(left+50-i,bottom , radius);
   
    //bar(left + 300, top, right + 300, bottom);
   line(left +35-i, bottom-16 ,left+50-i,bottom);
   line(left +50-i, bottom-20 ,left+50-i,bottom);
   line(left+50-i,bottom,left +65-i, bottom-16 );

   line(left+50-i,bottom,left +50-i, bottom+20 );
   line(left+50-i,bottom,left +35-i, bottom+16 );
   line(left+50-i,bottom,left +65-i, bottom+16 );

}

void joinrightTyre(int i){
   circle(left+150-i,bottom , radius);
   line(left +135-i, bottom-16 ,left+150-i,bottom);
   line(left +150-i, bottom-20 ,left+150-i,bottom);
   line(left+150-i,bottom,left +165-i, bottom-16 );

   line(left+150-i,bottom,left +165-i, bottom+16 );
   line(left+150-i,bottom,left +150-i, bottom+20 );
   line(left+150-i,bottom,left +135-i, bottom+16 );
}

void buildRoad()
{
  setcolor(8);
  line(0, top + 121, left+400, top + 121);
  delay(150);
}

void animateIt(int i){
 if(i<290){
    cleardevice();

  }
}

void giveCredit(){
  outtextxy(left + 100, top + 325, "Made by Santosh Dahal");
  delay(5000);
  getch();
  closegraph();
}