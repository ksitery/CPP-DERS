#include <stdio.h>
#include <stdlib.h>
int main()
{
int year;
printf("How old are you? ");
scanf("%d", &year);
if(year>=18){
    printf("Ehliyet alabilirsin! 🚗");
}
else{
    printf("Ehliyet alamazsin, büyü de gel.");
}
return 0;
}

