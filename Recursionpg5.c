#include<stdio.h>
int SumOfDigit(int num){
    if(num==0){
        return 0;
    }
    else{
        return (num%10 +SumOfDigit(num/10));
    }
    
}
int main(){
int n;
printf("Enter a number ");
scanf("%d",&n);
printf("%d",SumOfDigit(n));
    return 0;

}