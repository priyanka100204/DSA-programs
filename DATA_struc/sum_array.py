def sum() :
    n=int(input("enter size of your list : "))
   
    sum = 0
    list = []
    for i in range(n):
      list.append(int(input("enter : ")))
      
    for i in list:
        sum = sum +i
      
    

    return (sum)    



print(sum())   
