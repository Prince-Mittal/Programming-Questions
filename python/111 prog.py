import re
str1="Please send your feedback at info@chitkara.edu.in"
p="\w+\@\w+\.\w+\.\w+"
x=re.findall(p,str1)
print(x)

