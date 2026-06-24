def gr():
    if (a>b and a>c):
        return a
    if (b>a and b>c):
        return b        
    if (c>a and c>b):
        return c

a = int(input("Enter first number:"))
b = int(input("Enter second number:"))
c = int(input("Enter third number:"))

print(f"The greatest number is {gr()}")

