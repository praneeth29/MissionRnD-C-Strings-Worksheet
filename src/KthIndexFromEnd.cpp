/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>
char KthIndexFromEnd(char *str, int K) ;
int Length(char str[])
{
	int i;
	for (i = 0;str[i] != '\0';i++)
	{
	}
	return i;
}

char KthIndexFromEnd(char *str, int K) {

    int len=Length(str);
    if(K>len)
        return '\0';
    if(K<0)
    return '\0';

    if(str[0]=NULL)
        return '\0';
    int index=len-K-1;
    return str[index];

}
