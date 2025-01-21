#dictionary - słownik - jest mutowalny,nie ma indeksu
słownik1 = {'a':1,'b':2,'c':3}
słownik1['a'] = 2
print(słownik1)

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