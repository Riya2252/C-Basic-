#include<stdio.h>
 void  top( int n);
  void bottom( int n);
    
int main(){
    int n ;
    scanf("%d",&n);
    top(n);
   bottom(n);
   return 0;
    
}
void top(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i;j++){
            printf(" ");

        }
        for(int j=0;j<n-i;j++){
            printf(" *");

        }
         printf("\n");
         
    }   
   
    
}
void bottom(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j < 2 * (n - i - 1);j++){
            printf(" ");

        }
        for(int j=0;j<i+1;j++){
            printf(" *");

        }
         printf("\n");
         
    }   
   
    
}