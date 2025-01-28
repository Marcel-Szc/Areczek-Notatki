# *args to zbiór argumentów nieskończonych
# **dict_args - zostanie zebrane arg do słownika jako klucz-wartość
def fn(a,*args):
    print(a, args)
    for el in args:
        print(el)

#fn(2,3,4,5,6,7,8,1,True,'Arkadiusz','cx')
def fn1(a,*args, **dict_args):
    print(a)
    print(args)
    print(dict_args)
    for elarg in args:
        print(elarg)
    for keydict in dict_args:
        print(dict_args[keydict])

fn1(3,'Arek', 'lubi', '3ct',1,2,3,4,True,user = 'admin', version = 1.0, db = 'sql')