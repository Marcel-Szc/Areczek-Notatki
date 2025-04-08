from django.contrib import admin
from django.urls import path,include
from . import views

urlpatterns = [
    path('',views.start,name='start'),
    path('about/',views.about,name='about'),
    path('hobby/',views.hobby,name='hobby')
]
