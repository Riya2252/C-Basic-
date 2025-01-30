#include <stdio.h>

int Gcd(int a, int b) {
    if (b == 0) {  
        return a;
    }
    return Gcd(b, a % b);  
}
int main()
 {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("GCD of %d and %d is: %d\n", num1, num2, Gcd(num1, num2));
    
    return 0;
}
