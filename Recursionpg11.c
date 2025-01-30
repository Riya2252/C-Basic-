#include<stdio.h>
int BinarySearch(int arr[],int l,int h,int x)
{
    if(l>h)
    {
       return -1;
    }
    int mid=(l+h)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
     
    return  BinarySearch( arr, l, h-1,x);
    }
     else
    {
     return BinarySearch( arr, l+1, h,x);
    }
}
int main(){
    int n ,x,h,l,i;
    printf("Enter a number");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("Enter the number to search in the array ");
     scanf("%d",&x);

     BinarySearch( arr, l, h,x);
     for(int i=0;i<n;i++)
     {
        
    }
    printf("%d",i);
    return 0;
}