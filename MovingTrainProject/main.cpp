#include<stdio.h>
#include<graphics.h>
int main()
{
 initwindow(1200,600);   //initializes the graphic mode and set the window's width and height
 int y = getmaxy();      //returns the maximum coordinate of y
 int x = getmaxx();      //returns the maximum coordinate of x
 line(10,y-50,x-20,y-50);   //used to draw line of the track
 line(10,y-10,x-20,y-10);
 int j= 20;               //j is used to move the train with a difference of 20
 int k=0;                 //k is used to construct the track
 while(j<x)
 {
  if(k<2)
  {
    line(j,y-50,j+10,y-10);     //used to draw diagonals lines on the track
    j=j+10;                     //used to give space between the diagonal lines of the track
    k++;
  }
  else
  {
    j=j+20;
    line(j,y-50,j+10,y-10);
    k=0;
  }
 }
while(1)       //infinite loop to make the train move again and again from source to destination
{
int x1 = 10;
while(x1<getmaxx())   //used to create the train
{
line(x1,y-90,x1+40,y-90);
arc(x1+80,y-90,0,180,40);
circle(x1+80,y-80,30);
line(x1+120,y-90,x1+200,y-90);
arc(x1+240,y-90,0,180,40);
circle(x1+240,y-80,30);
line(x1+280,y-90,x1+350,y-90);
line(x1+20,y-200,x1+360,y-200);
line(x1+20,y-200,x1,y-90);
line(x1+360,y-200,x1+350,y-90);
line(x1+20,y-200,x1+40,y-300);
line(x1+40,y-300,x1+160,y-300);
line(x1+160,y-300,x1+140,y-200);
line(x1+155,y-270,x1+300,y-270);
line(x1+300,y-270,x1+290,y-200);
line(x1+240,y-270,x1+240,y-320);
line(x1+260,y-270,x1+260,y-320);
circle(x1+250,y-320,10);
x1=x1+20;
setfillstyle(SOLID_FILL,RED);  //used to set the fill pattern and interior colour
floodfill(x1+60,y-205,WHITE);  //used to fill polygon with specified colour
setfillstyle(SLASH_FILL,BLUE);
floodfill(x1+50,y-130,WHITE);
setfillstyle(HATCH_FILL,MAGENTA);
floodfill(x1+140,y-210,WHITE);
delay(100);                    //used to delay the screen
cleardevice();                 //clears the window
line(10,y-50,x-20,y-50);
line(10,y-10,x-20,y-10);
j= 20;
int k=0;
while(j<x-20)
{
  if(k<2)
  {
     line(j,y-50,j+10,y-10);
     j=j+10;
     k++;
  }
  else
  {
     j=j+20;
     line(j,y-50,j+10,y-10);
     k=0;
  }
}
}
}
getchar();
closegraph();    //used to close the graphic mode
return 0;
}
