value1=int(input())
value2=int(input())
value3=int(input())

if ((value1>=value2) and (value1>=value3)):
  largest=value1
elif ((value2>=value1) and (value2>=value3)):
  largest=value2
else:
  largest=value3

print("The largest value is",largest)
