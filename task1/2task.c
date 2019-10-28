#include <stdio.h>
char*tra(int n,char*s){
    int i=0;
    if(n<0){
        n=-n;
        s[i++]='-';
    }
    for(;n!=0;){
        s[i++]=n%10+48;
        n=n/10;
    }
    s[i]='\0';
    int j=0;
    if(s[0]=='-'){
        j=1;
        ++i;
    }
    for(;j<i/2;j++){
        s[j]=s[j]+s[i-1-j];
        s[i-1-j]=s[j]-s[i-1-j];
        s[j]=s[j]-s[i-1-j];
    }
    return s;
}
int main(void)
{
    int n;
    char z[128]={0};
    printf("一个整数：");
    scanf("%d",&n);
    tra(n,z);
    printf("输出一个字符串\"%s\"。\n",z);
return 0;
}
