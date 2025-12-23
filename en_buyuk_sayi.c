#include <stdio.h>
#include <stdlib.h>
int main(){
int sayilar[10], i, max;

for(i=0 ; i<10 ; i++){
    printf("Enter %d. number:\n", i+1);
    scanf("%d", &sayilar[i]);
}
max=sayilar[0];
for(i=1 ; i<10 ; i++){
     if(max<sayilar[i]){
        max=sayilar[i];
        }
}
printf("Max number is: %d", max);
return 0;
}