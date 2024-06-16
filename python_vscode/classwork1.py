#write a python program to find the number of vowel and consonants in a string 
str = input("write your string here - ")
count=0

for i in range(len(str)) :
    if str[i]== 'a' or str[i]=='e' or str[i]== 'i' or str[i]== 'o' or str[i]== 'u' or str[i]== 'A' or str[i]== 'E' or str[i]== 'I' or str[i]== 'O' or  str[i]=='U' :
        count = count + 1
    else : 
        pass    

print("no of vowels in given string are = " , count)    
print("no of consonants in  given string are = ", len(str)-count )