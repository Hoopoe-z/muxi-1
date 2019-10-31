#include <stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d",&a,&b);

    if((a<0||a>100)&&(b<0||b>100)){
        n=0;
    }
    else if(a>=60&&b>=60){
                n=2;
    }
    else{
                n=1;
    }
    switch (n) {
        case 0 : printf("it is errior\n");  break;
        case 2 : printf("pass\n");          break;
        case 1 : printf("not pass\n");      break;
        }

return 0;
}
       
