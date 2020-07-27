#include <graphics.h>

int main()
{
	std::srand(time(nullptr));
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
	int x=getmaxx()/2;
	int y=getmaxy()/2;
	int r=0;
	int k=1;
	int k2=0;
	for(int i=0;i<200;i++)
	{
		if(i%10==0)k*=-1;
		k2 = i%10/2;
		r = r+k2*k;
		switch(rand()%4){
			case(0):x+=3;
			case(1):x-=3;
			case(2):y+=3;
			case(3):y-=3;
		}
		circle(x,y,50+r);
		delay(50);
		cleardevice();
	}
    delay(2000);
    closegraph();
    return 0;
}