import math
import random

def trojkat_pole_obwod(a, b, c):
    obwod = a + b + c
    p = obwod / 2
    pole = math.sqrt(p * (p - a) * (p - b) * (p - c))
    return obwod, pole

def srodek_ciezkosci(x1, y1, x2, y2, x3, y3):
    return ((x1 + x2 + x3) / 3, (y1 + y2 + y3) / 3)

def odleglosc(x1, y1, x2, y2):
    return math.hypot(x2 - x1, y2 - y1)

def stopnie_na_radiany(stopnie):
    return math.radians(stopnie)

def na_prostej(x1, y1, x2, y2, x3, y3):
    return (y2 - y1)*(x3 - x1) == (y3 - y1)*(x2 - x1)

def nwd(a, b):
    while b:
        a, b = b, a % b
    return a

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

def silnia(n):
    return 1 if n <= 1 else n * silnia(n - 1)

def symbol_newtona(n, k):
    return silnia(n) // (silnia(k) * silnia(n - k))

def ciag_arytmetyczny(a1, r, n):
    return [a1 + i * r for i in range(n)]

def rzut_moneta():
    return random.choice(['orzeł', 'reszka'])

def rzut_kostka():
    return random.randint(1, 6)

def symulacja_kostka(wynik, proby=1000):
    trafienia = sum(1 for _ in range(proby) if rzut_kostka() == wynik)
    return f"Szansa na wyrzucenie: {wynik}: {trafienia / proby:.2f}"
