#include <stdio.h>

int main()
{
    int i,j,num,n;
    n=0;

    for(i=1;i<101;i++){
        num=1;
        for(j=2;j<i;j++){
          
            if(i%j==0){
               num=0;
               break;
            }
        }
            if(num==1){
                printf("%d",i);
                n++;
            }
            if(n%5==0){
                putchar('\n');
            }
    }
    putchar('\n');
return 0;
}
    
