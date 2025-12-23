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