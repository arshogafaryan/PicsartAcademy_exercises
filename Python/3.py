value1=int(input())
value2=int(input())
value3=int(input())
value4=int(input())
if ((value1<=value2) and (value1<=value3) and (value1<=value4)):
  smallest=value1
elif ((value2<=value1) and (value2<=value3) and (value2<=value4)):
  smallest=value2
elif ((value3<=value1) and (value3<=value2) and (value3<=value4)):
  smallest=value3
else:
    smallest=value4
if (value1+value2+value3+value4 == 0):
    print("The smallest value is",smallest)
