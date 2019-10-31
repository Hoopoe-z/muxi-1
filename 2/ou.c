#include <stdio.h>
int main()
{
   int a,b,max,y;
   scanf("%d%d",&a,&b);
   if(a-b<0){
       max=b;
       b=a;
       a=max;
   }
   while (a%b==0){
       y=a/b;
       a=b;
       b=y;
   } 
   printf("%d",b);
return 0;
}
