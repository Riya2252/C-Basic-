#include<stdio.h>
#include<string.h>
int isReverse(char str[], int start,int end)
{
    if(start>=end)
    {
    return 1;
    }
    int temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    return isReverse(str,start+1,end-1);
}
int main()
{
    char st[100];
    printf("Enter any String Value ");
    scanf("%s",st);
     int l=strlen(st);
     isReverse(st,  0, l-1);
     printf("%s",st);
     return 0;
}