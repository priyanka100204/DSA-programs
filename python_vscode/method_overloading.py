class student :
 #method overloading cannot be done in python . this given code is for other languages for python diffrent type of code is written :
    
    def function(self,a,b):
        self.a=a
        self.b=b
        return self.a+self.b


    def function (self ,a,b,c):
        self.a=a
        self.b=b
        self.c=c
        return self.a+self.b+self.c
        
    
s1 = student()

print(s1.function(5,6))