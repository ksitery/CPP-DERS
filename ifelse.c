#include <stdio.h>
#include <stdlib.h>
int main()
{
char myCharecter;
printf("Enter a letter:");
scanf("%c", &myCharecter);
if((myCharecter>='A') && (myCharecter<='Z')){
    printf("%c is an uppercase letter\n", myCharecter);
}
else if((myCharecter>='a') && (myCharecter<='z')){
    printf("%c is an lowercase letter\n", myCharecter);
}
else{
    printf("%c is not a letter\n", myCharecter);
}


    return 0;
}

