#include <stdio.h>
#include <stdlib.h>
int main()
{
int num_product, day;
const char *day_name;
num_product=0;
day=0;

printf("Enter a number of day (1-7):");
scanf("%d", &day);

switch(day){
    case 7: num_product+=25;
       if(day == 7) {day_name="Sunday";}
        
    case 6: num_product+=19;
       if(day == 6) { day_name="Saturday";}
       
    case 5: num_product+=15;
        if(day == 5) {day_name="Friday";}
        
    case 4: num_product+=10;
         if(day == 4) {day_name="Thursday";}
     
    case 3: num_product+=7;
         if(day == 3) {day_name="Wednesday";}
          
    case 2: num_product+=5;
         if(day == 2) {day_name="Tuesday";}
        
     case 1: num_product+=2;
         if(day == 1) {day_name="Monday";}
}
printf("%s gunu sonunda toplam %d urun satisi yapildi.", day_name, num_product);

return 0;
}
  