#include<stdio.h>
int fact(int num){
    if(num==0 || num==1){
        return num;
    }
    else{
        return (fact(num-1) + fact(num-2));
    }
    
}
int main(){
int n;
printf("Enter a number ");
scanf("%d",&n);
printf("%d",fact(n));
    return 0;

}