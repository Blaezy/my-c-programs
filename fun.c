#include <stdio.h>
void space()
{
    for (int j = 0; j < 97; j++)
    {
        printf("Happy Birthday Aditya\n");
        for (int i = 0; i < j + 1; i++)
        {
            printf(" ");
        }
    }
}
void space2()
{
    for (int j = 97; j > 0; j--)
    {
        printf("Happy Birthday Aditya\n");
        for (int i = 0; i < j - 1; i++)
        {
            printf(" ");
        }
    }
}

int main()
{
    space();
    space2();
    space();
    space2();
    

    return 0;
}