class A :
    def __init__(self):
        print("in A init")
    def feature1(self) :
        print("feature1 is working ")
    def feature2(self) :
        print("feature2-A is working ")
        
        
class B() :
    
    def __init__(self):
        super().__init__()
        print("in B init")
    def feature1(self) :
        print("feature1 is working ")
    def feature2(self) :
        print("feature2 is working ")

class c(A,B):
    def __init__(self):
        super().feature2()  
    
    def feat(self):
        super().feature2()   
c1=c()
c1.feat()

  
    