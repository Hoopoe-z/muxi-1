#include <stdio.h>
int factorial(int n)
{
    if(n>0)
        return n*factorial(n-1);
    else
        return 1;
}
int main(void)
{
    int n,i,num,sum;
    sum=0;
    num=0;
    printf("一个整数");  
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        num=factorial(i);
        sum+=num;
    }
    printf("一个整数%d阶乘和为%d。\n",n,sum);
return 0;
}
