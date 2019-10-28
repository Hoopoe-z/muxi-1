#include<stdio.h>
int main()
{
    int n,m,mul;
    for(n=1;n<=9;n++){
        for(m=1;m<=9;m++){
            mul=n*m;
            printf("%3d",mul);
        }
        putchar('\n');
    }
    return 0;
}
