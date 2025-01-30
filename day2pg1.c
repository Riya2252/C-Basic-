#include<stdio.h>
int main(){
int num;
printf("Enter any number");
scanf("%d",&num);
if(num>0){
printf("positive Number");
}
else if(num<0){
    printf("Negative Number");
}
else{
    printf(" Number is zero");
}

    return 0;
}