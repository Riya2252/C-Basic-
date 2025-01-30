#include<stdio.h>
int printNumberN(int num){
    if(num==1){
        return 1;
    }
    else{
        printf("%d",num);
        return printNumberN(num-1);
    }
    
}
int main(){
int n;
printf("Enter a number ");
scanf("%d",&n);
printf("%d",printNumberN(n));
    return 0;

}