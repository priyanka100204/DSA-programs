list=[5,8,4,6,9,2]
n=int(input("which number you want to search - "))
k=0

for i in range(len(list)) :
    if list[i]==n :
     
        k=1
        break
   
   
if k : 
      print("number is present in list.")
else : 
    print("number is not present .")