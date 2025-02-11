import math

class Dodawanie:
    def oblicz(self, a, b):
        return a + b

class Odejmowanie:
    def oblicz(self, a, b):
        return a - b

class Mnozenie:
    def oblicz(self, a, b):
        return a * b

class Dzielenie:
    def oblicz(self, a, b):
        if b == 0:
            return "Nie można dzielić przez zero!"
        return a / b

class Pierwiastkowanie:
    def oblicz(self, a):
        if a < 0:
            return "Nie można pierwiastkować liczby ujemnej!"
        return math.sqrt(a)

class Potegowanie:
    def oblicz(self, a, b):
        return a ** b

class Wynik:
    def __init__(self, a, b):
        self.a = a
        self.b = b
        
    def oblicz_wszystko(self):
        dodawanie = Dodawanie().oblicz(self.a, self.b)
        odejmowanie = Odejmowanie().oblicz(self.a, self.b)
        mnozenie = Mnozenie().oblicz(self.a, self.b)
        dzielenie = Dzielenie().oblicz(self.a, self.b)
        pierwiastkowanie_a = Pierwiastkowanie().oblicz(self.a)
        pierwiastkowanie_b = Pierwiastkowanie().oblicz(self.b)
        potegowanie = Potegowanie().oblicz(self.a, self.b)

        return {
            "Dodawanie": dodawanie,
            "Odejmowanie": odejmowanie,
            "Mnozenie": mnozenie,
            "Dzielenie": dzielenie,
            "Pierwiastkowanie a": pierwiastkowanie_a,
            "Pierwiastkowanie b": pierwiastkowanie_b,
            "Potegowanie": potegowanie
        }

# Przykładowe użycie:
a = int(input("Podaj liczbe a: "))
b = int(input("Podaj liczbe b: "))
wynik = Wynik(a, b)
rezultaty = wynik.oblicz_wszystko()
for operacja, rezultat in rezultaty.items():
    print(operacja, ": ",rezultat)
