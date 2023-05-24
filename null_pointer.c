#include <stdio.h>

int main()
{
    // NULL gives you no add. means (000000)
    int *num ;
    int *sus = NULL; // nul has to be in capital letters

    // if pointer variable doesn't carry any address its give the garbage value  
    printf("the value is %p\n",num); // your are req. the add. that num carry but num doesn't carry any add.
    printf("the value is %p\n",sus); // your are req. the add. that sus carry, and sus carry the NULL add.
    printf("the value is %p\n",&num); // your are req. the add. of num (not the carry add.)

    return 0;
}
