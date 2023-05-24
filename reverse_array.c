#include <stdio.h>
// this is exercise of reversing the order of array using functions

void rev(int num, int arr[])
{
   for (int i = num - 1; i >= 0; i--)
   {
      printf("%d,", arr[i]);
   }
}

int main()
{
   int arr[50];
   int num;
   printf("enter the total number\n");
   scanf("%d", &num);
   printf("enter your number \n");
   for (int i = 0; i < num; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("your numbers are : ");
   for (int i = 0; i < num; i++)
   {
      printf("%d,", arr[i]);
   }
   printf("\n");
   printf("the reverse are : ");
   rev(num, arr);

   return 0;
}