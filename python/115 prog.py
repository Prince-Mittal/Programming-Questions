import re
str1="Hello my name is Akhil and my date of joining is 11/09/2018 and have an experience of 1+ year"
p="\d+\/\d+\/\d+"
x=re.findall(p,str1)
print(x)
p1="\d+\s"
x2=re.findall(p1,str1)
print(x2)
p2="\s[A-Z]\w+"
x3=re.findall(p2,str1)
print(x3)
p3=" [aeiou]\w+"
x4=re.findall(p3,str1)
print(x4)
