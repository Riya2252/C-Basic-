#include<stdio.h>
int printNumber(int current,int n){
    if(current>n){
        return ;
    }
    printf("%d",current);
    printNumber(current+1,n);
    
}
int main()
{
int n;
printf("Enter a number ");
scanf("%d",&n);
if(n<=0)
{
    printf("please enter a positive integer  ");
}
           else{
     printNumber(1,n);
    

    }
    printf("\n");

    return 0;

}