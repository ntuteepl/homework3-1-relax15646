#include<stdio.h>
int main(){
int x;
int y;
scanf("%d %d",&x,&y);

 int a = x/1000;
 int b = (x/100) - ((x/1000)*10);
 int c = (((x/10)- ((x/1000)*100))) - ((x/100) - ((x/1000)*10))*10;
 int d = ((x - ((x/1000)*1000)) - ((x/100) - ((x/1000)*10))*100) - ((((x/10)- ((x/1000)*100))) - ((x/100) - ((x/1000)*10))*10)*10;
 int p;
 p = a + b + c + d;

 int e = y/1000;
 int f = (y/100) - ((y/1000)*10);
 int g = (((y/10)- ((y/1000)*100))) - ((y/100) - ((y/1000)*10))*10;
 int h = ((y - ((y/1000)*1000)) - ((y/100) - ((y/1000)*10))*100) - ((((y/10)- ((y/1000)*100))) - ((y/100) - ((y/1000)*10))*10)*10;
 int q;
 q = e + f + g + h;

 if (p > q){
  printf("%d",y);
 }else if(q>p){
  printf("%d",x);
 }else if(p==q){
   if(x>y)
    printf("%d",y);
   else printf("%d",x);
 }
}


