#include<stdio.h>
int main()
{
    int s[4][4]={{1,2,3,4,},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%4d",s[i][j]);
        }
        putchar('\n');
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%4d",s[j][3-i]);
        }
        putchar('\n');
    }
return 0;
}
