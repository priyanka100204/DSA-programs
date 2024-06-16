class student :
    
    def function(self,a,b):
        self.a=a
        self.b=b
        return self.a+self.b

class teacher:    
    def function (self ,a,b):
        self.a=a
        self.b=b
        return self.a+self.b
        
    
s1 = teacher()

print(s1.function(5,6))