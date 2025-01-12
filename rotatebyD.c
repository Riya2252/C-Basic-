#include <stdio.h>


int  LeftRotataeArrayByOne(int arr[],int n){
   int f=arr[0];// store first element 
   for(int i=0;i<n-1;i++){
       arr[i]=arr[i+1];//shift element to the left 
   }
   arr[n-1]=f;// move the first element to the end
}
int LeftRotataeArrayByD(int arr[],int n,int d){
    for(int i=0;i<d;i++){
         LeftRotataeArrayByOne(arr,n);
    }
   
} 

int main()
{
    int n,d;
    printf("Enter the size of an array :  ");
    scanf("%d",&n);
    printf("Enter the number of places to rotate:  ");
    scanf("%d",&d);
    int arr[n];
    printf("Enter the element in an array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    LeftRotataeArrayByD(arr,n,d);
    printf("After rotation byn one place an array is :");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}