# Dekoratory - zmieniają zachowanie funkcji, dekorator to inna funckja
# po co? aby zrobić różne warianty funkcji. Dynamiczne wpływanie na zachowanie funkcji

def my_decorator(fn):
    def wrapper():
        print('Początek odliczania')
        fn()
        print('Koniec odliczarnia')
    return wrapper

@my_decorator
def get_5_values():
    for v in range(1,6):
        print(v)

get_5_values()
