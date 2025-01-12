#include <stdio.h>


int  RemoveDuplicateElement(int arr[],int n){
   int res=1;
   for(int i=1;i<n;i++){
       if(arr[i]!=arr[res-1]){
           arr[res]=arr[i];
           res++;
       }
   }
   return res;
   
   
} 

int main()
{
    int n,d;
    printf("Enter the size of an array :  ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the element in an array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int new=RemoveDuplicateElement(arr,n);
    printf("After  all RemoveDuplicateElement an array is :");
    for(int i=0;i<new;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}