#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<snap.h>
void main()
{
int gdriver = DETECT,gmode;
int x,y,i;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
for(i=30;i<200;i++)
{
delay(50);
setcolor(i/5%15);
circle(x,y,i-10);
}
capture("C:\\TC\\Capture\\Capture1.jpg");
getch();
return false;
}