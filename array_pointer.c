#include <stdio.h>

int main()
{
    int arr[]= {1,2,3,4,5};

    printf("the value is %d\n",arr[3]);
    printf("the address is %d\n",&arr[2]);
    printf("the address is %d\n",&arr[3]);
    printf("the address is %d\n",arr);// if we write only arrays varible name (not using sq.brac) it give address 
    printf("the address is %d\n",arr+2);// if we add num its add to its address not at value 
    printf("the address is %d\n",arr+3);

    //  arr++;   we can't add or minus in direct arr it gives error
    // but we can add or minus in pointer array for ex: *array++; first we have to consider *array = &arr;

    printf("\nthe value is %d\n",(arr[3]));
    printf("the value of address is %d\n",*(&arr[2]));
    printf("the value of address is %d\n",*(&arr[3]));
    printf("the value of address is %d\n",*(arr));
    printf("the value of address is %d\n",*(arr+2));
    printf("the value of address is %d\n",*(arr+3));
    return 0;
}
