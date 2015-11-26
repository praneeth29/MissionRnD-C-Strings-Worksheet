/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin = *end;
    *end= temp;
    begin++;
    end--;
  }
}
void reverseWords(char *s)
{
  char *wordstart = s;
  char *temp = s;
  while( *temp )
  {
    temp++;
    if (*temp == '\0')
    {
      reverse(wordstart, temp-1);
    }
    else if(*temp == ' ')
    {
      reverse(wordstart, temp-1);
      wordstart = temp+1;
    }
  }
  reverse(s, temp-1);
}
void str_words_in_rev(char *input, int len){
	char *wordstart = input;
  char *temp = input;

  while( *temp )
  {
    temp++;
    if (*temp == '\0')
    {
      reverse(wordstart, temp-1);
    }
    else if(*temp == ' ')
    {
      reverse(wordstart, temp-1);
      wordstart = temp+1;
    }
  }
  reverse(input, temp-1);

}
