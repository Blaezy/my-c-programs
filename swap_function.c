#include <stdio.h>
void swap (int *sus,int *susy);
int main()
{
    int a=22;
    int b=25;
    printf("the value is %d,%d\n",a,b);
    swap(&a,&b);
    printf("the value is %d,%d\n",a,b);

    return 0;
}
void swap (int *sus,int *susy)
{
    int num;
    num=*sus;
    *sus=*susy;
    *susy=num;
}
