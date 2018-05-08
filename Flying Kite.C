//Author : youtube channel - Dotnet Mob
//Date   : 05-Nov-15
//Description : Program for kite animation
//For More :https://www.youtube.com/c/DotnetMob


#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

void main()
{
int gd=DETECT,gm;
int poly[10]; int flag=10,f=10;
int x=5,y=5,x_inc=0,y_inc=0;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
while(!kbhit())
{
setcolor(WHITE);
if(x<20)
	x_inc+=5;
if(x > 400)
	x_inc-=5;
if(y>300)
	y_inc-=5;
if(y<50)
	y_inc+=5;
	x=x+x_inc;
	y=y+y_inc;
 poly[0]=100+x+f;
 poly[1]=50+y+f;
 poly[2]=125+x+f;
  poly[3]=30+y+f;
 poly[4]=150+x+f;
  poly[5]=50+y+f;
 poly[6]=125+x;
 poly[7]=70+y;
 poly[8]=100+x+f;
 poly[9]=50+y+f;
drawpoly(5,poly);
fillellipse(15,280,10,10);
line(15,280,15,320);
line(15,320,10,350);
line(15,320,30,350);
line(15,320,30,300+flag); //hand
setcolor(RED);
line(30+f,300+flag,125+x,70+y);   //rope
line(125+x,70+y,110+x,90+y);
 line(125+x,70+y,125+x,100+y);
 line(125+x,70+y,139+x,110+y);
 flag=-flag;f=-f;
delay(200); // x++;y++;
cleardevice();

}
}
