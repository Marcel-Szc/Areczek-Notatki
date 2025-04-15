from django.shortcuts import render
from .models import Lista

def start(request):
    return render(request,'start.html')

def about(request):
    context = {'about': 'Pszczyna. Arkadiusz Waliczek, Samochodówka Górą'}
    return render(request,'about.html', context)

def lista(request):
    zapytanie = Lista.objects.all()
    context = {'lista': zapytanie}
    return render(request,'lista.html' ,context)
