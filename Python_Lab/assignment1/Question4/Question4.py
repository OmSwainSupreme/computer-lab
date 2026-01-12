import sys
from module_For_Question4 import *
while True:
    a=int(input("""Whose area you wanna get 
                1) Circle
                2) Triange
                3) Rectangle 
                
                Choose from the above type(1,2,3):- """))
    if a in [1,2,3]:
        break
    else:
        sys.stderr.write("You have enter wrong input !!\n")
calling=area()
if a==1:
    radius= int(input("Enter Radius:- "))
    print(calling.area_of_circle(radius))
if a==2:
    base= int(input("Enter base:- "))
    height= int(input("Enter height:- "))
    print(calling.area_of_circle(height,base))
if a==3:
    length= int(input("Enter Length:- "))
    breadth=int(input("Enter breadth:- "))
    print(calling.area_of_circle(length,breadth))