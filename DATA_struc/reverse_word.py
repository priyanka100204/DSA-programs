def reverse(str) :
    list=[]
    for i in range(n) :
       list.append(str[n-i-1])
    return list    
    


str=input("enter string : ")
n=len(str)
output=reverse(str)
print(output)
