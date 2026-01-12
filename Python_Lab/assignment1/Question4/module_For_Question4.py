import math

class area:

    def __init__(self):
        print("Welcome to Area finder application made By OP")

    def area_of_circle(self,radius):
        self.area=math.pi*(radius**2)
        return self.area
    
    def area_of_triangle(self,height,base):
        self.area=0.5*base*height
        return self.area
    
    def area_of_rectangle(self,length,breadth):
        self.area=length*breadth
        return self.area
    