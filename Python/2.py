value1=int(input())
value2=int(input())
value3=int(input())

if ((value1<=value2) and (value1<=value3)):
  smallest=value1
elif ((value2<=value1) and (value2<=value3)):
  smallest=value2
else:
  smallest=value3

print("The smallest value is",smallest)
