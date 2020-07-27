#include<graphics.h>
int main()
{
	std::srand(time(nullptr));
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
	int x,y,color;
	x=getmaxx()/2;
	y=getmaxy()/2;
	int r = 30;
	delay(5000);
	for(int i=0; i<=200; i++){
		x=rand()%getmaxx();
		y=rand()%getmaxy();
		color=rand()%14+1;
		for(int j=0;j<r+rand()%20-10;j++)
		{
			delay(5);
			setcolor(color);
			circle(x,y,j);
		}
	}
	return false;
}