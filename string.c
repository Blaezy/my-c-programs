#include <stdio.h>

int main ()
{
    char ch[50] ;
    char cha[50];
    char str[50];
    char sus[45]="susy is big brother of sus";
    printf("%s\n",sus);
    puts(sus);
    gets (ch);  // for input string 
    gets (cha);
    gets (str); // you can now enter with spaces like: ram is boy  

    printf("%s\n",ch);
    printf("%s\n",cha);
    printf("%s\n",str);
    puts (ch); // for print string 
    puts (cha);
    puts (str);
 

    return 0;
}