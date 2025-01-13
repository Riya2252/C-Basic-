#include <stdio.h>
int MaximumConsecutiveOnes(int arr[],int n){
    int max_count=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>max_count){
                max_count=count;
                
            }
            else{
                count=0;
            }
        }
    }
    return max_count;
    
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
    int res=MaximumConsecutiveOnes(arr,n);
    printf(" The missing Number is in an array : %d",res);

   

    return 0;
}