import math
import random

def trojkat_pole_obwod(a, b, c):
    obwod = a + b + c
    p = obwod / 2
    pole = math.sqrt(p * (p - a) * (p - b) * (p - c))
    return obwod, pole

print(trojkat_pole_obwod(3, 4, 5))

def srodek_ciezkosci(x1, y1, x2, y2, x3, y3):
    return ((x1 + x2 + x3) / 3, (y1 + y2 + y3) / 3)

print(srodek_ciezkosci(0, 0, 6, 0, 3, 6))

def odleglosc(x1, y1, x2, y2):
    return math.hypot(x2 - x1, y2 - y1)

print(odleglosc(0, 0, 3, 4))

def stopnie_radiany(co, dane):
    if co == "stopnie":
        return dane * math.pi / 180
    elif co == "radiany":
        return dane * 180 / math.pi
    else:
        return "Nie ma"

print(stopnie_radiany("stopnie", 20))
print(stopnie_radiany("radiany",math.pi/2))

def na_prostej(x1, y1, x2, y2, x3, y3):
    return (y2 - y1)*(x3 - x1) == (y3 - y1)*(x2 - x1)

na_prostej(0, 0, 1, 1, 2, 2)

def nwd(a, b):
    while b:
        a, b = b, a % b
    return a

print(nwd(48, 18))

def rozwiazania_ukladu(a1, b1, c1, a2, b2, c2):
    W = a1 * b2 - a2 * b1
    Wx = c1 * b2 - c2 * b1
    Wy = a1 * c2 - a2 * c1

    if W != 0:
        return "Układ oznaczony"
    elif Wx == 0 and Wy == 0:
        return "Układ nieoznaczony"
    else:
        return "Układ sprzeczny"
    
print(rozwiazania_ukladu(1, 2, 3, 4, 5, 6))

def silnia(n):
    return 1 if n <= 1 else n * silnia(n - 1)

print(silnia(5))

def symbol_newtona(n, k):
    return silnia(n) // (silnia(k) * silnia(n - k))

print(symbol_newtona(5, 3))

def ciag_arytmetyczny(a1, r, n):
    return [a1 + i * r for i in range(n)]

ciag_arytmetyczny(2, 3, 5)

def rzut_kostka():
    dana = random.randint(1, 6)
    return dana

def symulacja_kostka(wynik, proby=1000):
    trafienia = sum(1 for _ in range(proby) if rzut_kostka() == wynik)
    return f"Szansa na wyrzucenie: {wynik}: {trafienia / proby:.2f}"

print(symulacja_kostka(rzut_kostka()))