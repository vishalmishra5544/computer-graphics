// Description : CG program for bouncing ball

#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

#define HEIGHT getmaxy()
#define WIDTH getmaxx()
#define GROUND 450
#define MAXHEIGHT 420

void game(){
    int x,y=0,t=MAXHEIGHT,c=1;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

for(x=40;x<=getmaxx();x=x+2)
{
//Draw Ground
rectangle(0,MAXHEIGHT,getmaxx(),MAXHEIGHT+5);
floodfill(5,MAXHEIGHT+3,5);
//Draw Ball
pieslice(x,y,0,360,20);
floodfill(x,y,RED);
delay(100);
if(y>MAXHEIGHT-20)
{
c=0;
t=t-40;
}
if(y<=(MAXHEIGHT-t))
{
c=1;
}
if(t>=40)
y=y+(c?15:-15);

cleardevice();
//Exit upon keypress
if(kbhit())
break;
}
getch();
}
void intro1(){
 cleardevice();
printf("LOADING");
}
void intro2(){
 cleardevice();
printf("DEVlOPERS-vishal,kalpesh,aniket");
}
void intro3(){
 cleardevice();
printf("let's Start");
}
void main()
{
printf("BOUNCE BALL GAME");
}
void (){

}
void main(){
    while (1){
        int choice;
        printf("\n SELECT YOUR CHOICE");
        printf("\n \t1)PLAY \n \t 2)EXIT");
        scanf("%d",&choice)
        if( choice==1){
           intro1();
           intro2();
          intro3();
          game();
         getch();
        }
        else{
            printf("Thanks for playing");
            getch();
            exit(1);
        }
    }
    
}
