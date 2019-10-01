import re
print("enter multiline string")
a='''akhil kumar
1710991064 is
hello world'''
p="^\w+"
x=re.findall(p,a,re.M)
print(x)
