a = int(input("Enter a no:"))
b = int(input("Enter sec no:"))
if (b==0):
    raise ZeroDivisionError("Hey no divide zero")
print(f"the division between a and b is{a/b}")