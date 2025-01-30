#include<stdio.h>
int Sum(int num){
    if(num==0){
        return 1;
    }
    else{
        return (num+Sum(num-1));
    }
    
}
int main(){
int n;
printf("Enter a number ");
scanf("%d",&n);
printf("%d",Sum(n));
    return 0;

}