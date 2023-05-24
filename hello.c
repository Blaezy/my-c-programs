#include <stdio.h>
#include <stdlib.h> // this is use for using dynamic function like malloc,calloc,realloc and free

int main()
{
    int *sus;
    int n;

    // Using malloc function
    printf("Enter the size of array{using malloc function}\n");
    scanf("%d", &n);

    sus = (int *)malloc(n * sizeof(int)); // this is the syntax of malloc

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d position\n", i);
        scanf("%d", &sus[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d position is %d\n", i, sus[i]);
    }

    // Using calloc function
    int *sussy;
    int j;

    printf("\nEnter the size of array you want{using calloc function}\n");
    scanf("%d", &j);

    sussy = (int *)calloc(j, sizeof(int));

    for (int i = 0; i < j; i++)
    {
        printf("Enter the value of sussy[%d]\n", i);
        scanf("%d", &sussy[i]);
    }
    for (int i = 0; i < j; i++)
    {
        printf("The value of sussy[%d] is %d\n", i, sussy[i]);
    }
    printf("\n");

    free(sussy);

    // using realloc function
    printf("\nEnter the new size of array you want{using realloc function}\n");
    scanf("%d", &j);

    sussy = (int *)realloc(sussy, j * sizeof(int));

    for (int i = 0; i < j; i++)
    {
        printf("Enter the new value of sussy[%d]\n", i);
        scanf("%d", &sussy[i]);
    }
    for (int i = 0; i < j; i++)
    {
        printf("The new value of sussy[%d] is %d\n", i, sussy[i]);
    }
    return 0;
}