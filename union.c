#include <stdio.h>
#include <string.h>

// union use shared memory ,I will explain how ?
union student
{
    int roll_no;
    char name[35];
    int marks;
} s1;

int main()
{
    
    s1.roll_no = 34;
    s1.marks= 32; // the last one saved value is stored in memory and use for all 
    strcpy(s1.name,"Aditya");

    printf("the roll no is %d\n", s1.roll_no);
    printf("the marks is %d\n", s1.marks);
    printf("the name is %s\n",s1.name);
    
    return 0;
}
