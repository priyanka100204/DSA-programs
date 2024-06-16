def pl(list) :
    i=0
    j=len(list)-1
    while i<j :
        if list[i] != list[j] :
          return 0 
        i=i+1
    
        j=j-1
    return 1 

list =[]
n =int(input("enter size -"))

for i in range (n):
    list.append(input("enter char :"))

x=pl(list)
if x==1 :
    print("yes ")
else : 
    print ("no")