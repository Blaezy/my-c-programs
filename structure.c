#include <stdio.h>
#include <string.h>

struct valorant
{
    int id;
    char name[34];
    char main_agent[34];
};
struct valorant adverse, blaezy, zebron;
// for saving string (words) in structure type ,you have to use strcpy string library function or take input as normally 

int main()
{
    adverse.id = 1;
    strcpy(adverse.name, "Aditya");
    strcpy(adverse.main_agent, "jett");
    blaezy.id = 2;
    strcpy(blaezy.name, "Ankit");
    strcpy(blaezy.main_agent, "omen");
    zebron.id = 3;
    strcpy(zebron.name, "Rohit");
    strcpy(zebron.main_agent, "breach");

    printf("the id of adverse is %d\n", adverse.id);
    printf("the name of adverse is %s\n", adverse.name);
    printf("the main agent of adverse is %s\n", adverse.main_agent);

    printf("the id of blaezy is %d\n", blaezy.id);
    printf("the name of blaezy is %s\n", blaezy.name);
    printf("the main agent of blaezy is %s\n", blaezy.main_agent);

    printf("the id of zebron is %d\n", zebron.id);
    printf("the name of zebron is %s\n", zebron.name);
    printf("the main agent of zebron is %s\n", zebron.main_agent);

    return 0;
}