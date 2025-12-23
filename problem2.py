saat = int(input("Enter hour (0-23): ")) #kullanicidan saat bilgisini aldim.
dakika = int(input("Enter minute (0-59): ")) #kullanicidan dakika bilgisini aldim.

print(f"Time: {saat:02d}:{dakika:02d}") #saati HH:MM seklinde yazdırdım.
saat_ikili = bin(saat)[2:] #saati binary seklinde yazdirdim.
print(f"Hour in binary: {saat_ikili}")
dakika_ikili = bin(dakika)[2:] #dakikayi binary seklinde yazdirdim.
print(f"Minute in binary: {dakika_ikili}") 