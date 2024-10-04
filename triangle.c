#include<stdio.h>
int main(){

   int s1,s2,s3;
printf("Enter Any three side of the Triangle ");
scanf("%d %d %d",&s1,&s2,&s3);
if (s1==s2 && s2==s3)
{
     printf(" All  side are  equal . The triangle is Equalteral \n");
}
else if (s1==s2||s2==s3|| s1==s3)                                   
{
    printf(" only two side is equal . The triangle is isoceles \n");
    /* code */
}
else{
     printf("  No side are equal . The triangle is  scalene");

    
}
return 0;
}
