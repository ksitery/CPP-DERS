#include <stdio.h>
#include <stdlib.h>
int main()
{
int number;
printf("Enter a number: ");
scanf("%d", &number);
switch(number%2){
    case 0: printf("The number is even."); break;
    case 1: printf("The number is odd."); break;
   }

return 0;
}