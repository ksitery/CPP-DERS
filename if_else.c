#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c;
char longest_side;
printf("Enter three number: ");
scanf("%d%d%d", &a, &b, &c);
if(a>b && a>c){
    longest_side='a';
}
else if(b>a && b>c){
    longest_side='b';
}
else{
    longest_side='c';
}

if(longest_side == 'a'){
    if(a*a == b*b+c*c)
    printf("Dik acili ücgen.\n");
    else if(a*a >= b*b+c*c)
    printf("Genis acili ücgen.\n");
    else
    printf("Dar acili ücgen.\n");
}
else if(longest_side == 'b'){
    if(b*b == a*a+c*c)
    printf("Dik acili ücgen.\n");
    else if(b*b >= a*a+c*c)
    printf("Genis acili ücgen.\n");
    else
    printf("Dar acili ücgen.\n");
}
else{
    if(c*c == a*a+b*b)
    printf("Dik acili ücgen.\n");
    else if(c*c >= a*a+b*b)
    printf("Genis acili ücgen.\n");
    else
    printf("Dar acili ücgen.\n");

}
return 0;
}

