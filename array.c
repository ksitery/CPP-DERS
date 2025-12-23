#include <stdio.h>
#include <stdlib.h>
int main()
{
int number, i, sum=0, min, max, even=0, odd=0, aranan, adet=0, k, temp;
float average;
printf("Dizinin kac elemanli olmasini istersiniz: "); // kullanıcıdan dizinin istenilen eleman sayısınnı istiyorum.
scanf("%d", &number);

int dizi[number];

for(i=0; i<number; i++) {//kullanıcadan sırayla sayıları alıyorum.
    printf("%d. sayiyi giriniz: ", i + 1); 
    scanf("%d", &dizi[i]); 
}
min=dizi[0];
max=dizi[0];
for(i=0; i<number; i++){//dizideki sayıların toplamını, en küçüğünü, en büyüğünü, kaç tane çift ve tek sayı olduğunu ve ortalamayı bulup ekrana yazdırıyorum.
    sum+=dizi[i];
    
    if(dizi[i]<min){
        min=dizi[i];
    }
    if(dizi[i]>max){
        max=dizi[i];
    }

    if(dizi[i]%2==0){
        even++;
    }
    else{
        odd++;
    } 
}
    average=(float)sum/number;

    printf("Toplam: %d\n", sum);
    printf("Ortalama: %.2f\n", average);
    printf("En kucuk deger: %d\n", min);
    printf("En Buyuk deger: %d\n", max);
    printf("Cift sayi sayisi: %d\n", even);
    printf("Tek sayi sayisi: %d\n", odd);

printf("Aramak istediginiz sayiyi giriniz: ");//kullanıcının dizi içinde aramak istediği sayı varsa onu aayıp adedini ekrana yazdırıyorum.
scanf("%d", &aranan);

for(i=0; i<number; i++) {
    if(dizi[i] == aranan){
        adet++;
    }
}
printf("%d sayisi %d kez bulundu.\n", aranan, adet);

for (i=0; i<number-1; i++) {//dizinin elemanlarını küçükten büyüğe sıralamak için iç içe döngü ve geçici değer kullandım.

    for (k = 0; k<number-1-i; k++){
        if (dizi[k] > dizi[k+1]){
            temp = dizi[k];        
            dizi[k] = dizi[k+1];   
            dizi[k+1] = temp;      
        }
    }
}
printf("Dizinin kucukten buyuge siralanmis hali: \n");//sıralanmış halini yazdırıyorum.
for (i = 0; i < number; i++) {
    printf("%d ", dizi[i]);
}
printf("\n");
return 0;
}
