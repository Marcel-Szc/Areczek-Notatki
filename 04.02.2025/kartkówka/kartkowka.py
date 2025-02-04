#############################################################
##             Zadanie trzeba odkomentarzować!             ##
#############################################################
#Zadanie 1:
'''
liczba1 = int(input("Podaj liczbe 1: "))
liczba2 = int(input("Podaj liczbe 2: "))
liczba3 = int(input("Podaj liczbe 3: "))
liczba4 = int(input("Podaj liczbe 4: "))
liczba5 = int(input("Podaj liczbe 5: "))

listaSr = [liczba1, liczba2, liczba3, liczba4, liczba5]
srednia = sum(listaSr) / len(listaSr)
print(srednia)
'''
# Zadanie 2:
'''
a = int(input("Podaj bok a: "))
b = int(input("Podaj bok b: "))
tupla = (a,b)
pole = tupla[0] * tupla[1]
print("Pole prostokąta to: ", pole, "cm^2")
obwod = (tupla[0] * 2) + (tupla[1] * 2)
print("Obwód prostokąta to:", obwod, "cm")
'''
# Zadanie 3:
'''
liczba = int(input("Podaj liczbe: "))
potega = int(input("Podaj wykładnik tej liczby(potege): "))
potegowanie = {
    "liczba": liczba,
    "potega": potega
}
wynikPoteg = pow(potegowanie["liczba"], potegowanie["potega"])
print(wynikPoteg)
'''
# Zadanie 6:
'''
liczba1 = int(input("Podaj liczbe 1: "))
liczba2 = int(input("Podaj liczbe 2: "))
liczba3 = int(input("Podaj liczbe 3: "))
liczba4 = int(input("Podaj liczbe 4: "))
liczba5 = int(input("Podaj liczbe 5: "))

listaSum = [liczba1, liczba2, liczba3, liczba4, liczba5]
print(sum(listaSum))
'''
# Zadanie 10:
masa = int(input("Podaj masę(kg): "))
wzrostCm = int(input("Podaj wzrost(cm): "))
wzrost = wzrostCm / 100
bmi = masa /pow(wzrost, 2)
print(bmi)

if bmi < 18.5:
    print("Niedowaga")
elif bmi >= 18.5 and bmi <= 24.9:
    print("BMI:",bmi,", Prawidłowa waga")
elif bmi > 24.9:
    print("BMI:",bmi,",Nadwaga")
else:
    print("BMI:",bmi,",Bład")