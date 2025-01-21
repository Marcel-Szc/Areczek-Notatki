if 1==1:
    print("ok")
else: 
    print("nie ok")

if 1==1:
    print("ok")
elif 2==2:
    print("ok")
else:
    print("nie ok")
name = input("podaj imie: ")
if len(name) < 3:
    print("podaj min. 3 znaki")
else:
    print(name)

a = 'aaa'
if not a:
    print("nie istnieje")