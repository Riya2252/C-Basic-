#include <stdio.h>
#include <stdbool.h>

bool SortedArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
            
        }
    }
    return true;
}

int main()
{
    int n;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element in an array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(SortedArray(arr,n)){
        printf("The array is sorted in ascending order ");
        
    }
    else{
        printf("The array is not sorted ");
    }

    return 0;
}