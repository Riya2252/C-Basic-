#include<stdio.h>
int powerofTwo(int num){
    if(num==0){
        return 1;
    }
    else{
        return 2*powerofTwo(num-1);
    }
    
}
int main(){
int n;
printf("Enter a number ");
scanf("%d",&n);
printf("%d",powerofTwo(n));
    return 0;

}