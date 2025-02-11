# inicjalizer __init__(self) self oznacza że pracujemy na jednej instancji klasy
#referencja do instancji

class Point:
    def __init__(self,x=1,y=1):
        self.x = x
        self.y = y

p1 = Point()
print(p1.x,p1.y)


p3 = Point(11,2)
p2 = Point(11,22)
p4 = Point(1,1)
p4.x = 10
p4.y = 20
print(p2.x,p2.y)
print(p3.x,p3.y)
print(p4.x,p4.y)