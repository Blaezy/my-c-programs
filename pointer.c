#include <stdio.h>

int main()
{
    int num = 22;
    int *sus = &num; // sus carry the address of num

    /*
      %p=gives address
      %x=gives hexadecimal
    */

    printf("the value is %p\n", &sus);
    printf("the value is %p\n", *sus);
    printf("the value is %d\n", *sus);
    printf("the value is %p\n", &num);
    printf("the value is %p\n", sus);

    return 0;
}
