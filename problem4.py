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