#include <stdio.h>
#include <string.h>

void remove(char arr[])
{
    int a = 0;
    int index = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == '<')
        {
            a = 1;
            continue;
        }
        else if (arr[i] == '>')
        {
            a = 0;
            continue;
        }
        if (a == 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }
    arr[index] = '\0';

    // removing the trelling space from begining
    while (arr[0] == ' ')
    {
        int k;
        for (k = 0; k < strlen(arr); k++)
        {
            arr[k] = arr[k + 1];
        }
    }
    // removin the trelling spaces from the end
    while (arr[strlen(arr) - 1] == ' ')
    {
        arr[strlen(arr)-1]= '\0';
    }
}
int main()
{
    /*
    question is remove the <h1> from starting and end also remove extra spaces from
    printf("<h1>    this is heading    <h1> ");
    */

    char arr[] = "       <h1>        this is heading            <h1>";
    remove(arr);
    printf("the word is ~~%s~~", arr);

    return 0;
}