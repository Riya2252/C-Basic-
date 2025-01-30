#include<stdio.h>

int main()
{
    int n;
    char p = 'A';
    printf("Enter the no.of rows. ");
    scanf("%d",&n);
   for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf("%c",p+j);
       
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(i==0|| j==2*i+1){
                printf("%c",p+n-1);
            }
            else{
                 printf(" ");
            }
        }
            for (int j = n - i - 2; j >= 0; j--) 
        {
            printf("%c", p + j);
        }

        printf("\n");
            
    }
    return 0;

}
    
        
    
    