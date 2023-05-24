#include <stdio.h>
int sus(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter the both number \n");
    scanf("%d%d",&a,&b);

    sus(&a,&b);
    printf("The addition is %d and the subtration is %d\n",a,b);
    printf("Now the value of varible are change for a is %d and for b is %d\n",a,b);

    return 0;
}
int sus(int*a,int*b)
{
    int add,sub;
    add=*a+*b;
    sub=*a-*b;
    *a=add;
    *b=sub;

}
