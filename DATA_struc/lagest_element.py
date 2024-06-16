def max(arr) :
    max =arr[0]
    for i in  list :
        if(i>max) :
            max=i
    return max





list=[]
n=int(input("enter size : "))

for i in range (n):
    list.append(int(input("enter number : ")))
 
print(max(list))