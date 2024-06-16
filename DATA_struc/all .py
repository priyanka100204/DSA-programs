#1
str=input("enter your string :")
n=len(str)
vc=0
c=0
for i in range (n):
    if str[i] =='a' or str[i]=='e' or str[i]=='i' or str[i] =='o' or  str[i]=='u' or str[i]=='A' or str[i]=='E' or  str[i]=='I'or str[i] =='O' or str[i]=='U'  :
        vc=vc+1
    else  :
        c=c+1
        
print( "vowel : " , vc) 
print("consonent : ",c)  

#2
def add(a,b):
    return a+b
def sub(a,b):
    return a-b 
def mul(a,b):
    return a*b 
def div(a,b):
    return a/b
def mod(a,b):
    return a%b
x=int(input("enter number : "))
y=int (input("enter number :"))
choice = input("enter your choice : ")
if choice=="add" :
   print( add(x,y) )
elif choice=="sub" :
    print( sub (x,y))
elif choice=="mul":
    print(mul(x,y))
elif choice=="dev":
   print( div(x,y))
elif choice=="mod":
    print(mod(x,y))


#3
def display(l,n) :
       for i in l:
             print(i)
def insert(l,n)   :
    for i in range(n):
   
      l.append(int(input("enter number :")))
def max(l,n):
    max=l[0]
    for i in l :
        if(i>max) :
            max=i     
    return max 
def min(l,n) :
    min=l[0]
    for i in l :
        if(i<min):
            min=i
    return min       
list1=[]
n=int (input("enter length of list :"))
insert(list1,n)
display(list1,n)
print("max : ",max (list1,n))
print ("min : ", min(list1,n))

#4
def display(t,n) :
    for i in t :
        print(i)
def insert(l,n):
    for i in range(n) :
       list1.append(int(input("enter number : ")))      
        
tup=()
list1=list(tup)

n=int(input("no of elements in tuple :"))
insert(list1,n)


    
tup=tuple(list1)
display(tup,n)

   
#5
def display(t,n) :
    for i in t :
        print(i)
def insert(l,n):
    for i in range(n) :
       l.append(int(input("enter number : ")))      
def common (t1,t2) :
    for i in t1:
        for j in t2 :
            if(i==j) :
                print(i)      
tup1=()
tup2=()
list1=list(tup1)
list2=list(tup2)

n1=int(input("no of elements in tuple 1 :"))
n2=int(input("no of elements in tuple 2 :"))
print("insert in tuple 1 :")
insert(list1,n1)
print("insert in tuple 2 :")
insert(list2,n2)
tup1=tuple(list1)
tup2=tuple(list2)
common(tup1,tup2)


   
#6 doubt 
def display(l,n) :
       for i in l:
             print(i)

list1=[]
for i in range(101) :
    if(i==0):
       continue
    list1.append((i)*(i))
#display(list1,100)
for i in range(101):
    if(i%7==0):
        print(list1[i])



#7
# how to insert list inside list 
def display(l,n):
    for i in l :
        print(i)
def tdist(l):
    sum=0   
    for i in l :
         sum =sum+i  
    return sum        
import math        
coard=[]
n=int(input("number of points :"))

for i in range(n):
    x=int(input("enter x coord :"))
    y=int(input("enter y coord :"))
    
    coard.append([x,y])
display(coard,n)
list1=[]
for i in range(1,n):
    a=coard[i-1]
    b=coard[i]
    distance=math.dist(a,b)
   
    list1.append(distance)
displacement=math.dist(coard[0],coard[n-1])
print(tdist(list1))
print(displacement)



#8
def loginway(login):
    user=input("enter user name : ")
    if user in login :
        password=input("enter password :")
        
        if password==login.get(user) :
            print("Namsate _/\_")
        
        else :
            print("incorrect password :( ")
        
    else :
        print("username not found :( ")
    
    key=input("do you want your new user name : yes  / no ")
    
    if key=="yes":
        new_username=input("enter username : ")
        new_pass=input("enter password")
        login.update({new_username : new_pass})
    if key=="no" :
        print("aapka din shubh ho :)")

dict={}
loginway(dict)


#9
with open('my_data','w') as file :
    file.write("now i can write here ")
    file.write("again something .")

with open('my_data','r') as file :
    print(file.read())

with open ('my_data','rb') as file :
    print(file.read())
    
with open('my_data','w' ) as file :
    file.write("hiii")


with open ('my_data') as file :
    file.close()
#10
f=open('abc','r')
print(f)
#print(f.read())   puri file ko print kr dega 
#print(f.readline()) 1st line ko print krega 
#print(f.readline())  2nd line ko print krega 
#print(f.readlines())  puri file ki lines ko as a list / array bnake print krvaega
#print(f.readline(4))  it will print only four charactyer
 
f1=open('priyanka','w') #if the opening file is not exist then in writing mode it will automatacaliy  creat file 
#f1.write("something") #w it means we only write file not append 
#f1.write("hiii")  
# so we use append 
f2=open('priyanka','a')
#f2.write ("helo")
#f2.write("\n hii ")
for data in f :
     f1.write(data) # remove everthing from f1 and copy f to f1
     
#10
row=int(input("enter number of rows : "))
col=int(input("enter number of coloumn :"))


            
for i in range (row):
    print(i*(' ') + (row-i)*('*'))