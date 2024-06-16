# create two tuple and input values and print common values between them 
tuple1=()
tuple2=()

n1=int(input("lenght of tuple1 : "))
n2=int(input("length of tuple2 : "))
for i in range(n1):
    list1=list(tuple1)
    x=int(input("enter values in tuple1 : "))
    list1.append(x)
    tuple1=tuple(list1)
for i in range(n2):
    list2=list(tuple2)
    x=int(input("enter values in tuple2 : "))
    list2.append(x)
    tuple2=tuple(list2)
    
print("print tuple1 = ",tuple1)
print("print tuple2 = ", tuple2)
    

    
for i in range(n1):
    for j in range(n2):
        if tuple1[i]==tuple2[j] :
            print(tuple1[i])
        



        