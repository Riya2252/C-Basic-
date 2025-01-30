#include<stdio.h>
int main(){
    int choice;
    float value,result;
    printf(" 1.Convert Centimeter to Meter\n");
    printf(" 2.Convert  Meter Centimeter to\n");
    printf(" 3.Convert   Kilogram to Gram\n");
    printf("4. Convert Gram to Kilogram\n");
    printf(" 5.exit");
     
     printf("Enter your Choice (1-5) ");
     scanf("%d",&choice);
      switch(choice){
        case 1 :
        printf("Enter the value to covert into cm to m ");
        scanf("%f  ",&value);
        result=value/100.0;
        printf(" %.2f cm = %.2f m ",value,result);
        break ;
        case 2 :
        printf("Enter the value to covert into m to cm  ");
        scanf("%f",&value);
        result=value*100;
        printf(" %.2f m = %.2f cm after conversion",value,result);
        break ;
        case 3 :
        printf("Enter the value to covert into kg to g ");
        scanf("%f",&value);
        result=value/100.0;
        printf(" %.2f kg = %.2f g after coversion",value,result);
        break ;
        case 4 :
        printf("Enter the value to covert into g to kg ");
        scanf("%f",&value);
        result=value*100.0;
        printf(" %.2f g = %.2f kg ",value,result);
        break ;
        default :
        printf("exit");

      }
      return 0;

}