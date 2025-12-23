#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_number, guess_number;
    int guess_count = 1;
    srand(time(NULL));
    random_number = (rand() % 100) + 1;

    printf("1-100 arasinda bir sayi tuttum.\n");
    printf("Toplam 5 hakkin var.\n");
    printf("Tahmin Et!\n");

    while(guess_count <= 5){
        printf("%d. Tahmin sayisini gir: ", guess_count);
        scanf("%d", &guess_number);

        if(guess_number < 1 || guess_number > 100){
            printf("Sayi 1 ile 100 arasinda olmali!\n");
            continue; 
        }

     
        if(guess_number == random_number){
            printf("Tebrikler! %d. seferde bildin.\n", guess_count); 
            break; 
        }
        else{
            if(guess_number > random_number){
                printf("Daha kucuk bir sayi girmelisin.\n"); 
            }
            else{
                printf("Daha buyuk bir sayi girmelisin.\n"); 
            }
            guess_count++; 
        }
    }

    if(guess_count > 5){
        printf("\nMaalesef hakkin bitti. Dogru sayi: %d idi.\n", random_number); // 
    }

    return 0;
}

