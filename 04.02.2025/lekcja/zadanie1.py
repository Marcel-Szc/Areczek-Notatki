lista = [zmienna for zmienna in range(6,100)]
print(lista)

tab = tuple(lista)

for el in tab:
    print(el)

opcje =  {
    'env' : 'production',
    'db' : 'mysql',
    'version': 1.0,
    'show_error': True
}
'''
print(opcje['version'])
del opcje['db']
print(opcje.get('db'))
'''

for key in opcje:
    print(opcje[key])