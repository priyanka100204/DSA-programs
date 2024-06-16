# write a python program to find maximum number in given list 
list1=[]
n=int(input("enter length of list"))

for i in range(n):
    x=int(input("enetr number for list for : "))
    list1.insert(i,x)

max = 0 
for i in range(n):
    if list1[i] > max :
        max = list1[i]
else :
    pass 


print ("maximum number in given list = ", max )        
        