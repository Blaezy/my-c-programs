#include <stdio.h>

int main()
{
    // arithmetic in pointers
    // size of(int) add when we add num in address 
    // size of(int) can be diffrent in diffrent architecture(pc)
    int num = 22;
    int *sus = &num; 
    printf("%d\n", sus);
    printf("%d\n", *sus+1);
    printf("%d\n",sus+1);
    printf("%d\n",sus+2);
    num++; // if we use ++ in variable it plus the value
    printf("%d\n",*sus);

    char ch='a';
    char *vh=&ch;

    printf("%d\n", vh);
    vh--; // if we use ++ or -- in pointer it plus or minus the address
    printf("%d\n", vh+1);
    printf("%d\n", vh-2);

    return 0;
}
