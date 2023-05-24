#include <stdio.h>

int a = 5; // this is global variable that can use everywhere and using predence in function if same name variable
// we can't give any funtion value to static variable because it contains only constant number 
// Ex: static int var = func() {where func() return some integer valuse like 34,45,etc;}
int func()
{
    // static variable is able to store value and use it again
    // if you aren't provide value to static variable it store 0 automatically
    static int num = 4;
    static int sum;
    printf("The value is %d\n", num);
    printf("The value is %d\n", sum);
    num++;
}
int func2()
{
    int num = 4;
    printf("The value is %d\n", num);
    num++;
}
int main()
{
    printf("before using static variable\n");
    func2();
    func2();
    func2();
    printf("after using static variable\n");
    func();
    func();
    func();
    printf("\n");
    int a = 15; // in compilier for value its see first local variable then global variable
    printf("The value is %d\n", a);

    return 0;
}