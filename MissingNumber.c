
#include <stdio.h>
int MissingNumber(int arr[],int n){
    int actual_sum=0;
    for(int i=0;i<n;i++){
        actual_sum +=arr[i];
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int expect_sum=min;
    for(int i=1;i<=n;i++){
        expect_sum=expect_sum+(min+i);
    }
    int mis=expect_sum-actual_sum;
    
}

int main()
{
    int n;
printf("Enter the size of an array ");
scanf("%d",&n);
int arr[n];

printf("Enter the element in an array ");
for(int i=0;i<n;i++)
{
      scanf("%d",&arr[i]);  
}
    int res=MissingNumber(arr,n);
    printf(" The missing Number is in an array : %d",res);

   

    return 0;
}