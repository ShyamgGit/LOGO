#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
      int gd=DETECT,gm;
      initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setcolor(RED);

	line(100,100,150,50); // /(lower)
	line(200,100,150,50); // \(lower)
	line(70,100,150,30);  // /(upper)
	line(230,100,150,30); // \(lower)
	line(100,100,100,150);// |(inner-left)
	line(200,100,200,150);// |(inner-right)
	line(70,100,70,150); // |(outer-left)
	line(230,100,230,150); // |(outer-right)
	line(100,150,230,180);
	line(70,150,200,180);
	line(200,180,200,230);
	line(230,180,230,230);
	line(200,230,150,280);
	line(230,230,150,310);
	line(150,280,100,230);
	line(150,310,70,230);
	line(70,230,70,180);
	line(100,230,100,180);
	line(70,180,100,180);
	line(200,150,230,150);

	getch();
	return 0;
}