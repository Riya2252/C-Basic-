#include<stdio.h>
int main(){
int n, r,sum=0,temp;
printf("Enter any number ");
scanf("%d",&n);

temp=n;
while(n>0){
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
}
if(temp==n){
    printf("The number is palindrome ");
}
else{
    printf("The number is not a palindrome");
}

    return 0;
}