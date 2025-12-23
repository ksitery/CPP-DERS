#include <stdio.h>
#include <stdlib.h>
int main()
{
int num1,num2,num3,min,max;
printf("Enter three number: ");
scanf("%d%d%d", &num1, &num2, &num3);
if(num1>num2 && num1>num3){
    max=num1;
    if(num2>num3){
        min=num3;
    }else{
        min=num2;}
}
else if(num2>num1 && num2>num3){
    max=num2;
    if(num1>num3){
        min=num3;}
    else{
        min=num1; }
}
else{
max=num3;}
if(num1>num2){
    min=num2;}
else{
    min=num1;}
printf("Max is %d\n", max);
printf("Min is %d", min);
return 0;
}

