#include <stdio.h>

int fib(int a); // reccursive method (using reccursion)
int fibo(int a);// itrative method (using loop)

int main()
{
    int num;
    printf("For finding the fibonacci number");
    
    printf("\nEnter the index number \n");
    scanf("%d", &num);

    
    if (num == 0)
    {
        printf("enter a valid index number\n");
        goto end;
        
    } 
    else
    {
        printf("your %dth fibonacci number is %d from itrative method\n", num, fibo(num));
        printf("your %dth fibonacci number is %d from recursive method\n", num, fib(num));
        
    }
    
    end:
    return 0;
}
int fib(int a)
{
    if (a == 1)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }

    return fib(a - 1) + fib(a - 2);
}
int fibo(int x)
{
    int a=0;
    int b=1;
    for (int i = 0; i<x-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}

// After result you can see itrative method is more faster than recursive method in fibonacci series
// so it depends on you to which one to use