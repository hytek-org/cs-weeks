#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("The character is lower case");
     else if(ch>='A' && ch<='Z')
        printf("The character is upper case");
      else if(ch>='0' && ch<='9')
        printf("The character is number");
      else
        printf("It is a special character");

}