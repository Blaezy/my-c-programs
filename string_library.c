#include <stdio.h>
#include <string.h> // using this include for using string library 

int main ()
{
    char sus[]="banana";
    char susy[]="boy";
    char susybaka[]="fuck you";

    puts(strcat(sus,susy)); // you can combined two string with "strcat function"
    // you can't cambined more than two string in one strcat function
    puts(strcat(susybaka,strcat(sus,susy)));
    printf("\n");


    char ace[]="valorant";
    printf("the length of %s is %d\n",ace,strlen(ace));
    // strlen() this function is use for show the length of string 
    printf("\n");

    char car[]="racecar";
    char rat[]="rotator";
    char boy[]="boy";
    char fuck[]="fuck you";
    printf("the reverse are :\n");
    puts(strrev(car));
    puts(strrev(rat));
    puts(strrev(boy));
    puts(strrev(fuck));
    // strrev() this function is use for reverse the string 
    // palindrome are called whoes word reverse are same as original 
    printf("\n");

    char s1[]="mighty";
    char s2[]="raju";
    char s3[50];
    puts(strcpy(s3,strcat(s1,s2)));
    strcat(s3,s2); //  it combines with garbage value if the string is empty (run this line after commenting upper line )
    puts(s3);
    puts(s1);
    puts(s2);
    // strcpy() this function is use for copy the string in empty string 
    puts(strcpy(s1,s2));
    puts(s1);
    // if string is not empty it replace the string 
    printf("\n");

    char s4[]="adverse";
    char s5[]="blaezy";
    char s6[]="banana";
    char s7[]="banana";

    printf("the strcmp of s4 and s5 are %d\n",strcmp(s4,s5));
    printf("the strcmp of s5 and s4 are %d\n",strcmp(s5,s4));
    printf("the strcmp of s4 and s6 are %d\n",strcmp(s4,s6));
    printf("the strcmp of s5 and s6 are %d\n",strcmp(s5,s6));
    printf("the strcmp of s6 and s7 are %d\n",strcmp(s6,s7));
    // strcmp() this function is use for compare two string 
 

    return 0;
}