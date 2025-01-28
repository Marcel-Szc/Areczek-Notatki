#napisz app na bazie funkcji:
#wyznacz pole trójkata z Herona
#przekaż liste argumentów nieskończoną: wyznacz sumę, średnią, minimum, maximum
import math 
a = 3
b = 4
c = 5
def pole(x,y,z):
    p = (x+y+z)/2
    print('Pole trójkata(z Herona)',math.sqrt(p*(p-x)*(p-y)*(p-z)))

pole(a,b,c)

def lista(*args):
    suma = sum(args)
    srednia = sum(args) / len(args)
    minimum = min(args)
    maximum = max(args)
    print('Suma: ', suma,'Średnia: ', srednia,'Min: ', minimum,'Max: ', maximum)

lista(1,2,3,4,5,6,7)

