/*
OVERVIEW: Given a float number ,Convert it into a string

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/
#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){

int i=0,j,x=0,n;
int rem;
int c=0;
str[0]='\0';
if(number<0){
    x=1;

    number=number/-1;
    n=(int)number;
}
else
n=(int)number;

while(n>0){
    rem=n%10;
    for(j=i;j>=0;j--)
    {
        str[j+1]=str[j];
    }
    str[0]=(char)rem + '0';
    n=n/10;
    i++;
}
str[i++]='.';
for(j=0;j<afterdecimal;j++)
{
    number*=10;
    rem=(int)number%10;
    str[i]=(char)rem + '0';
    str[++i]='\0';
}
if(x==1)
{
    for(j=i;j>=0;j--)
        str[j+1]=str[j];
    str[0]='-';
}

}



