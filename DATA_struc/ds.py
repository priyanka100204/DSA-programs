#1
def isPelindrom(s) :
    return s==s[::-1]

str =input("write your string : ")
ans=isPelindrom(str)
if ans == 1 :
    print("yes ")
else :
    print("no")
    
#2
string = input("write your string :")

reverse=string.split()[::-1]
l=[]
for i in reverse :
    l.append(i)

print("  ".join(l))

#3
