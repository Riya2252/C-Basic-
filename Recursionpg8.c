#include<stdio.h>
int Count(int num){
    if(num==1){
        return ;
    }
    else{
        return 1+Count(num/10);
    }
    
}
int main(){
int n;
printf("Enter a number ");
scanf("%d",&n);
printf("%d",Count(n));
    return 0;

}