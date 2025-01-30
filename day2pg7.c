#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character ");
    scanf("%c",&c);
switch(c)
{
    case  'a':
    case  'e':
    case  'i':
    case  'o':
    case  'u':
    printf("This is vowel");
    default:
    if(c>'a'&&c<'z')
    {
        printf("this is consonent ");
    }
    else{
        printf(" This is not an alphabet");

    }

 }
 return 0;
}

