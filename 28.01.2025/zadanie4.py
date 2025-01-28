x = 1

def fn():
    x = 2
    global y 
    y = 3
    print(x, y)

fn()

print(x,y)