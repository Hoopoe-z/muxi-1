#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        if(a==b||b==c||a==c){
            if(a==b&&b==c){
                puts("3");
            }
            else{
                puts("2");
            }
        }
         else{
             puts("1");
        }
    }
    else{
       puts("0");
    }
return 0;
}
