#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 int r,x,y,p,xc=320,yc=240,i;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  clrscr();

  printf("Enter the radious");
  scanf("%d",&r);
  x=0;
  y=r;
  putpixel(xc+x,yc-y,1);

  p=3-(2*r);

  for(x=0;x<=y;x++)
  {
   if(p<0)
   {
    y=y;
    p=(p+(4*x)+6);
   }
   else
   {
    y=y-1;
    p=p+((4*(x-y)+10));
   }

   putpixel(xc+x,yc-y,1);
   putpixel(xc-x,yc-y,2);
   putpixel(xc+x,yc+y,3);
   putpixel(xc-x,yc+y,4);
   putpixel(xc+x,yc-y,5);
   putpixel(xc-x,yc-y,6);
   putpixel(xc+x,yc+y,7);
   putpixel(xc-x,yc+y,8);

 getch();
}