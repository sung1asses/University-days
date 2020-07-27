#include<graphics.h>
int main()
{
	std::srand(time(nullptr));
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
	int x,y,color;
	int x_arr[5];
	for(int i=0; i<5; i++){
		x_arr[i] = getmaxx()/5*i;
	}
	y=getmaxy();
	int r = 20;
		delay(5000);
	for(int i=0; i<=500; i++){
		for(int k=0; k<4; k++){
			for(int j=0; j<10; j++){
				x=x_arr[j]+k*40+rand()%14-7;
				circle(x,y+k*100,r);
			}	
		}
		y--;
		delay(3);
		cleardevice();
	}
	return false;
}