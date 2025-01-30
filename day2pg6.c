#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf(" Enter the side of a triangle  ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>0 && s2>0 && s3>0 || (s1+s2+s3)==180){
        if((s1+s2)>s3 || (s2+s3)>s1 || (s1+s3)>s2){
            printf(" the triangle is valid ");

        }
        else{
            printf(" Not a valid Triangle ");
            
        }
        
    }
    else{
        printf(" Not a valid Triangle ");
    }
    return 0;
}