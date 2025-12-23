#include <stdio.h>
#include <stdlib.h>
int main()
{
char my_operator;
float num1, num2;
printf("Enter an opertor: ");
scanf("%c", &my_operator);
printf("Enter two number: ");
scanf("%f%f", &num1, &num2);
switch(my_operator){
     case '/': printf("Your number is %f\n", num1/num2); break;
     case '-': printf("Your number is %f", num1-num2);break;
     case '+': printf("Your number is %f", num1+num2); break;
     case '*': printf("Your number is %f", num1*num2); break;
    default: printf("You entered wrong operator.");  
}
return 0;
}
