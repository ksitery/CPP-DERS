#include <stdio.h>
#include <stdlib.h>
int main()
{
int month_number;
printf("Which month:");
scanf("%d", &month_number);

switch(month_number){
    case 4:
    case 6:
    case 9:
    case 11: printf("There are 30 days in the %dth month.\n", month_number);
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: printf("There are 31 days in the %dth month.\n", month_number);
        break;
    case 2: printf("There are 28 or 29 days in the %dth month.\n", month_number);
        break;
    default: printf("This is not a month's number.");
        break;
}

return 0;
}

