#include<stdio.h>
int main(){
    int n;
    printf("Enter the number in the pattern   ");
    scanf("%d",&n);

    int size=2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int top=i;
            int left=j;
            int bottom = size-i-1;
            int right = size-j-1;
             
             int min_dist=i;
             if(j<min_dist){
                min_dist=j;
             }
             if(size-i-1<min_dist){
                min_dist=size-i-1;
             }
             if(size-j-1<min_dist){
                min_dist=size-j-1;
             }
             printf("%d",n-min_dist);


        }
        printf("\n");
    }
    return 0;
}