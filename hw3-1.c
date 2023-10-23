#include <stdio.h>

int main(){
int n,a=1;
scanf("%d",&n);
if(n<=1)
    a=0;
else for(int i=2;i*i<=n;i++)
   if (n%i==0){
   a=0;
   break;
}
 if (a==0)
    printf("no");
 else if (a==1)
    printf("yes");
}

