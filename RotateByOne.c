#include<stdio.h>
int LeftRotataeArrayByOne(int arr[],int n){
    int f=arr[0];// store the first elemnet 
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];

    }
    arr[n-1]=f;

}
int main(){
    int n;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemnet of an array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    LeftRotataeArrayByOne(arr,n);
    printf("array after rotate by one place");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}