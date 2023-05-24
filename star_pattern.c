#include <stdio.h>

int main()
{
    int num;
    int star;
    printf("For triangular star pattern enter 0 and for reverse triangular star pattern enter 1 \n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("how many lines of triangle do you need?\n");
        scanf("%d", &star);
        for (int i = 0; i <= star; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (num == 1)
    {
        printf("how many lines of reverse triangle do you need?\n");
        scanf("%d", &star);
        for (int i = star; i > 0; i--)
        {
            for (int j = i; j > 0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
