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