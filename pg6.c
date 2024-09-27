#include<stdio.h>
int main(){
    
    int fact=1,num;
    printf("enter any Number ....");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf(" the factorial of the number is %d",fact);
    
    
        return 0;
}