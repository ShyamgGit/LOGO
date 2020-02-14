#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>

void main( )
{
	float x,y,x1,y1,x2,y2,dx,dy,p;
	int i,gd=DETECT,gm;
	 x1=50;
	 y1=75;
	 x2=100;
	 y2=120;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	printf("Starting co-ordinate : (%f,%f)\n",x1,y1);

	printf("Ending co-ordinate : (%f,%f)\n",x2,y2);


	dx=abs(x2-x1);
	dy=abs(y2-y1);

	if(dx>=dy)
		p=dx;
	else
		p=dy;

	dx=dx/p;
	dy=dy/p;

	x=x1;
	y=y1;

	i=1;
	while(i<=p)
	{
		putpixel(x,y,3);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(100);
	}

	closegraph();
}
