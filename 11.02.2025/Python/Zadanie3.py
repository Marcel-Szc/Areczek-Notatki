class Point:
    pointer_counter = 0
    def __init__(self,x=0,y=0):
        self.x = x
        self.y = y

    def move_to_new_cords(self, x=0, y=0):
        self.x = x
        self.y = y

p1 = Point(3,5)
p2 = Point(4,9)