x = int(input("Enter first number: "))
o = input("Enter the operation: ")
y = int(input("Enter second number: "))

if o == '+':
    print(x + y)
elif o == '-':
    print(x - y)
elif o == '*':
    print(x * y)
elif o == '/':
    print(x / y)
elif o == '%':
    print(x % y)
else:
    print("Unknown operation")
