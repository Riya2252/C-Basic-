#include <stdio.h>
int Secondlargest(int arr[],int n){
    int l=0,res=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[l]){
            res=l;
            l=i;
        }
        else if(arr[i]>arr[res] && arr[i]!=arr[l]){
            res=i;
        }
        
    }
    return res;
    
   
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
     int max=Secondlargest(arr,n);
    for(int i=0;i<n;i++){
       
    }
printf("the SecondlargestLargest element in an  array is : %d ",arr[max]);
   
    return 0;
}