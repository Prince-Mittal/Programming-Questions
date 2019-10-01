import re
print("enter string")
a=input()
p="\w+"
x=re.findall(p,a)
print(x)
