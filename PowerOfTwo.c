#include<stdio.h>
#include<stdbool.h>
bool PowerOfTwo(int n){
    if(n==0){
        return false;
    }
    return (n&(n-1))==0;
}
int main(){
    int n;
    printf("Enter the Number .");
    scanf("%d",&n);

    int power= PowerOfTwo(n);
    if(power){
        printf(" %d is a power of two .",n);

    }
     else{
        printf(" %d is not a power of two .",n);
        
    }
    return 0;
}