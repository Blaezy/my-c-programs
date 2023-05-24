#include <stdio.h>

// the whole struct student is a name because we define here what is it and use in int main
// below using the typedef in structure type

typedef struct student
{
    int roll_no;
    char name[35];
} idiot;
// struct student aditya, ankit, vikas;  // we can use new name on this line like see below
idiot aditya, ankit, vikas;
// after changing name we can use both new and old name in our code to run

int main()
{
    struct student anuj;
    aditya.roll_no = 34;
    ankit.roll_no = 33;
    anuj.roll_no = 32;

    printf("%d\n", aditya.roll_no);
    printf("%d\n", anuj.roll_no);
    // typedef <preavious_name> <new_name> ;
    typedef int number;
    number a1, a2, a3;

    a1 = 2, a2 = 3;
    printf("sum is %d", a1 + a2);

    // int* a, b; // here it take pointer only on a not b 
    // after using typedef
    typedef int* bad;
    bad a, b;
    int c = 45;
    a = &c;
    b = &c; // normal integer can't save an address that's why give error

    return 0;
}
