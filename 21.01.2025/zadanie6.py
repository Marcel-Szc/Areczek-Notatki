# listy
'''
mojalista = [1,2,3,4,5,6,'7','a',True, False]
print(mojalista[4])
mojalista[0] = 25
print(mojalista)
mojalista.append('Lubie pogramować')
print(mojalista)
print(mojalista[0:5])
print(mojalista[5:])
'''
'''
lista1 = [1,2,3,4,5]
lista2 = [2,3]
lista3 = lista1 + lista2
print(lista3)
print(3 in lista1) #przeszukiwanie list
print(len(lista3))
'''
mojasuperlista = [zmienna for  zmienna in range(10)] # list comprehension 
print(mojasuperlista)
mojasuperlista2 = [zmienna for zmienna in range(9,27) if zmienna % 2 == 0]
print(mojasuperlista2)