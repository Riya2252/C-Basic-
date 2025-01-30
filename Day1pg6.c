#include <stdio.h>
int main()
{
    int n;
    printf("enter the lenght of a pattern ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==n-1||j==0||j==i+1-1){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    

    return 0;
}