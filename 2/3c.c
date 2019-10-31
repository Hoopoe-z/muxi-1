#include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<i;j++){
            putchar(' ');
        }
        for(j=0;j<5-2*i;j++){
            putchar('*');
        }    
        putchar('\n');
    }
    for(i=2;i>0;i--){
        for(j=1;j<i;j++){
            putchar(' ');
        }
        for(j=1;j<8-2*i;j++){
            putchar('*');
        }
        putchar('\n');
    }
return 0;
}
