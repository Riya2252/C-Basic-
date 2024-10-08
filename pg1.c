#include<stdio.h>
int main(){
    int n=9,m=3;
    int sum=n ;
    int i;
    for (i=1;i<=m;i++)
    {
       printf("%d",sum);
       printf("+");
       sum=sum*10+n;
       
    }
    return 0; 
}

    

