#include <stdio.h>

void fun1(int array[]) // we can take array by using int array_name[] 
{
    for (int i=0; i<4; i++)
    {
        printf("the value of %d is %d\n",i,array[i]);
    }
    array[2]= 34; // changing value of array changes the actual value becoz it have the add. of array
}

void fun2(int *sus) // we can also take array by using pointer like *pointer_name 
{
    for (int i=0; i<5; i++)
    {
        printf("the value of %d is %d\n",i,*(sus+i));
        // we directly changing the address of array and getting the value (* means it have the add. and gives the value )
        // and same as fun1 if we change value here it change tha actual value 
    }
}

void fun3(int array[2][2])
{
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("the value of %d,%d is %d\n",i,j,array[i][j]);
        }
    }
}



int main ()
{
    int arr[]={2,4,5,5};
    fun1(arr); // we pass the array as it array_name and it passes the array_name first address 
    printf("\n");
    fun1(&arr[0]);// arr=&arr[0] : (array_name = &array_name[0])
    printf("\n");

    int num[]={11,22,33,44,55};
    fun2(num);
    printf("\n");

    int sus[2][2]={{34,45},{56,67}}; // in 2D array case you have to define the number of blocks([2][3]) otherwise it give error
    fun3(sus);               // but in 1D array case compiler automaticaly calculate the number of blocks
    printf("\n");

    return 0;
}
// now we can do anything with array that we have in funtion 
// like avg , numeric calculation, etc.
