#include<stdio.h>
int top(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++){
        printf("*");
       }
       
       printf("\n");
    }
}
int bottom(int n){
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i+1;j++){
        printf("*");
       }
       
       
       
       printf("\n");
    }

}
int main(){
    int n;
    printf("Enter the no.of rows. ");
    scanf("%d",&n);
    
    top(n);
    bottom(n);

    
    return 0;
}