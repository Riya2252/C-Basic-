#include <stdio.h>
int largest(int arr[],int n){
    int l=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[l]){
            l=i;
        }
        
    }
    return l;
}

int main()
{
    int n;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int max=largest(arr,n);
    for(int i=0;i<n;i++){
       
    }
printf("the Largest element in an  array is : %d ",arr[max]);
   
    return 0;
}
