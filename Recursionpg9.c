#include<stdio.h>
#include<string.h>
int isPlaindrome(char str[], int start,int end)
{
    if(start>=end)
    {
    return 1;
    }
    if(str[start]!=str[end])
    {
        return 0;

    }
    return isPlaindrome(str,start+1,end-1);
}
int main()
{
    char st[100];
    printf("Enter any String Value ");
    scanf("%s",st);
     int l=strlen(st);
     if(isPlaindrome(st,0,l-1))
     {
        printf("YES.. This String is Palindrome");

     }
     else{
        printf("Oops.. This String is  not Palindrome");

     }
     return 0;
}