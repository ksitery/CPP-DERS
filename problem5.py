#kullanicidan Kirmizi, yedil ve mavi degerlerini aldim.
red = int(input("Enter Red value (0-255): "))
green = int(input("Enter Green value (0-255): "))
blue = int(input("Enter Blue value (0-255): "))

hex_code = f"#{red:02X}{green:02X}{blue:02X}" #degerleri hexadecimal formata çevirdim.

print(f"RGB({red}, {green}, {blue}) = {hex_code}") #sonucu ekrana yazdirdim.