#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character ");
    scanf("%c",&c);
    if(c>'a'&&c<'z')
    {
         if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
         {
        printf("This is vowel");

            }
          else
          {
        printf(" This character is consonent");
          }

        
    }
    else{
        printf(" This not an alphabet");

    }
    return 0;

}