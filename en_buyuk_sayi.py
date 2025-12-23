sayilar= []
adet = int(input("Kaç adet sayi gireceksiniz? "))

for i in range(adet):
    girilen=int(input(f"{i+1}. sayiyi girin: "))
    sayilar.append(girilen)
en_buyuk=sayilar[0]

for i in range(1, adet):
    if en_buyuk<sayilar[i]:
        en_buyuk=sayilar[i]
print(en_buyuk)