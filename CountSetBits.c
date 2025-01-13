#include<stdio.h>
int CountSetBits(int n){
    int res=0;
    while(n>0){
        n=n&(n-1);
        res++;
    }
    return res;
}
int main(){
    int n;
    printf("Enter the Set Bits.");
    scanf("%d",&n);
    int count=CountSetBits(n);
    printf("The number of count set bit is : %d",count);
    return 0;
}