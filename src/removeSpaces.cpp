/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>
char removeSpaces(char *str) {

    if(str[0]='NULL')
        return '\0';
    int c = 0;
    int i;

    for (i = 0; str[i]; i++)
        if (str[i] != ' ')
          {
              str[c] = str[i];
            c++;
          }
    str[c] = '\0';
    return '\0';
}
