class student :
    school= "telusko"
    
    def __init__(self ,m1 ,m2) :
        self.m1=m1 
        self.m2=m2
    
    def avg (pepi):
        return (pepi.m1+pepi.m2)/2       
    @classmethod 
    def getschool(cls):
        return cls.school
    @staticmethod
    def info():
        print (" ")
        
s1  = student (45,89)
print (s1.avg())
print(s1.getschool())
print(s1.info())

        