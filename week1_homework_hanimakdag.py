#PROBLEM 1
try:  #hata verecek sayi girilmedikce try'in icinde calisacak.
    
    sicaklik = float(input("Enter temperature: "))  #kullanicidan derece bilgisi aliyorum.
    birim = input("Enter unit (C/F): ")   #kullanicidan derecenin biriminin bilgisi aliyorum.

    if birim == "C" or birim == "c": 
        sonuc = (sicaklik * 9/5) + 32  #celsius ise fahrenheit'a donusturuyorum.
        print(f"{sicaklik:.2f}°C is equal to {sonuc:.2f}°F")  #ekrana hem celsius versiyonunu hem fahrenheit versiyonunu yazdiriyorum.

    elif birim == "F" or birim == "f": 
        sonuc = (sicaklik - 32) * 5/9  #fahrenheit  ise celsius'a donusturuyorum.
        print(f"{sicaklik:.2f}°F is equal to {sonuc:.2f}°C") #ekrana hem celsius versiyonunu hem fahrenheit versiyonunu yazdiriyorum.

    else:
        print("Lütfen sadece 'C' veya 'F' giriniz.") #gecersiz harf girilirse uyariyorum.

except ValueError:
    print("Hata: Lütfen geçerli bir sayi giriniz.") #gecersiz sayi girilirse uyariyorum.



#PROBLEM 2    
saat = int(input("Enter hour (0-23): ")) #kullanicidan saat bilgisini aldim.
dakika = int(input("Enter minute (0-59): ")) #kullanicidan dakika bilgisini aldim.

print(f"Time: {saat:02d}:{dakika:02d}") #saati HH:MM seklinde yazdırdım.
saat_ikili = bin(saat)[2:] #saati binary seklinde yazdirdim.
print(f"Hour in binary: {saat_ikili}")
dakika_ikili = bin(dakika)[2:] #dakikayi binary seklinde yazdirdim.
print(f"Minute in binary: {dakika_ikili}") 



#PROBLEM 3  
try:
    brut_maas = float(input("Enter your gross annual salary: ")) #kullanicidan yillik maasi bilgisini aldim.


    if brut_maas <= 50000: # maas miktarina göre vergi oranini belirledim.
        vergi_orani = 0.10  
    elif brut_maas <= 100000:
        vergi_orani = 0.15  
    else:
        vergi_orani = 0.20 

    vergi_tutari = brut_maas * vergi_orani  #vergi miktarini hesapladim.
    net_maas = brut_maas - vergi_tutari   #net maasi hesapladim.
    #sonuclari yazdirdim.
    print(f"Gross Salary: {brut_maas:,.2f} TL")
    print(f"Tax Amount: {vergi_tutari:,.2f} TL ({int(vergi_orani*100)}%)")
    print(f"Net Salary: {net_maas:,.2f} TL")

except ValueError: #gecersiz girislere uyari verdim.
    print("Error: Please enter a valid numerical value for salary.")


#PROBLEM 4
password = input("Enter your password: ") #kullanicidan sifre girisi istedim.

is_length_met = len(password) >= 8 #uzunluk kontrolü yaptim.
 
has_digit = any(char.isdigit() for char in password)  #sifrede en az bir rakam var mi diye kontrol ettim.
has_upper = any(char.isupper() for char in password)  #sifrede en az bir buyuk harf var mi diye kontrol ettim.

#sartlarin karsilanip karsilanmadigini ekrana yazdirdim. 
print(f"Length (8+ characters): {'Met' if is_length_met else 'Not Met'}")
print(f"Contains digit: {'Met' if has_digit else 'Not Met'}")
print(f"Contains uppercase: {'Met' if has_upper else 'Not Met'}")

#sifrenin kabul edilip edilmediğine karar verdik.
if is_length_met and has_digit and has_upper:
    print("Password Accepted!") #sartlar sağlandıysa 
else:
    print("Password Rejected!") #herhangi biri eksikse


#PROBLEM 5 
#kullanicidan Kirmizi, yedil ve mavi degerlerini aldim.
red = int(input("Enter Red value (0-255): "))
green = int(input("Enter Green value (0-255): "))
blue = int(input("Enter Blue value (0-255): "))

hex_code = f"#{red:02X}{green:02X}{blue:02X}" #degerleri hexadecimal formata çevirdim.

print(f"RGB({red}, {green}, {blue}) = {hex_code}") #sonucu ekrana yazdirdim.