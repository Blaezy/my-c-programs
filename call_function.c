#include <stdio.h>
void swap (int *num);
int main()
{
    int a=22;
    int b=25;
    printf("the value is %d\n",a);//before call by reference 
    swap(&a);
    printf("the value is %d\n",a);//after call by reference

    return 0;
}
void swap (int *num)
{
    *num= 743857943;
}
