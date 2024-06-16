class student :
    def __init__(self , m1 ,m2):
        self.m1=m1 
        self.m2=m2
       
    
    def __add__(s,o):
        m1=s.m1+o.m1
        m2=s.m2+o.m2
        s3=student(m1,m2)
        return s3
    
    def __gt__(self,other):
        s1= self.m1+self.m2
        s2= other.m1+other.m2
        if s1>s2:
            return True
        else :
            return False
        
    def __str__(self):
        return '{} {} '.format (self.m1,self.m2)   
      
s1=student(58,69)
s2=student(60,65)
print(s1)
s3=s1+s2
print(s3.m1)
a=5
b=3
print(a+b)
if s1>s2:
    print("s1 wins")
    
else :
    print("s2 wins")    
  