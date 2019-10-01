import re
print("enter string")
a=input()
p="\d+\s\w+"
x=re.findall(p,a)
if x:
    print(x)
else:
    print("no")
