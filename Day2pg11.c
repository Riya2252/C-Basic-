#include<stdio.h>
int CubeFree(int num){
    for(int i=2;i<=cbrt(num);i++){
        if(num%(i*i*i)==0){
            return 0;
        }
        // not cube-free
    }
    return 1;
    //cube-free
}
void FindAandB(int n){
    for(int a=1;a<=cbrt(n);a++)
    {
        int a3=a*a*a;// calculate a^3
        if(n%a3==0){
            int b=n/a3;// calculate b
            if(CubeFree(b)){
                printf("a=%d,b=%d\n",a,b);
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    FindAandB(n);
    return 0;

}