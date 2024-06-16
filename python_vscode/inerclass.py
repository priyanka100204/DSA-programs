"""
class student :
    def __init__(self ,name , rollno):
        
        self.name=name
        self.rollno=rollno
    def show (self):
        print(self.name , self.rollno)    
s1=student('priyanka',15) 
s2=student('rashi',18)

s1.show()   
s2.show()        """


class student :
    def __init__(self,name , rollno):
        
        self.name=name
        self.rollno=rollno
        self.lap= self.laptop()
    def show (self):
        print(self.name , self.rollno)
        
        
        
    class laptop :
         def __init__(self):
             self.brand='hp'  
             self.cpu='i5'
             self.ram=8
             print(self.brand ,self.cpu,self.ram)
                   
s1=student('priyanka',15) 
s2=student('rashi',18)
lap1=s1.lap  

