#include <stdio.h>
#include <stdlib.h>
int main()
{
int year, birth_year;
printf("Which year did you born? ");
scanf("%d", &year);
birth_year=2025 - year;
printf("You are %d years old.", birth_year);

return 0;
}


