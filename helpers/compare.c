#include <ctype.h>
#include <stdio.h>

int compare(int res1, int res2, int param)
{

    if (param == 1)
    {
        if (res1 != 0 && res2 != 0) {
            printf("The character is an alphabetic character\n");
        } else if (res1 == 0 && res2 == 0) {
            printf("The character is not an alphabetic character\n");
        } else {
            printf("Your function is incorrect. Check your code.\n");
        }
    }

    if (param == 2)
    {
        if (res1 != 0 && res2 != 0) {
            printf("The character is a print character\n");
        } else if (res1 == 0 && res2 == 0) {
            printf("The character is not a print character\n"); 
        } else {
            printf("Your function is incorrect. Check your code.\n");
        }
    }

    if (param == 3)
    {
        if (res1 > 0 && res2 > 0) {
            printf("The character is a digit\n");
        } else if (res1 == 0 && res2 == 0) {
            printf("The character is not a digit\n"); 
        } else {
            printf("Your function is incorrect. Check your code.\n");
       }
    }

    if (param == 4)
    {
        if (res1 != 0 && res2 != 0) {
            printf("The character is an ascii character\n");
        } else if (res1 == 0 && res2 == 0) {
            printf("The character is not an ascii character\n"); 
        } else {
            printf("Your function is incorrect. Check your code.\n");
        }
    }

    return 0;
   
}

/* Parameters of function

1 - isalpha
2 - isprint
3 - isdigit
4 - isascii
*/
