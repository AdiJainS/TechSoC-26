def f_TO_c(f):
    return 5*(f-32)/9
f = int(input("Enter temp in Fahrenheit:"))
c = f_TO_c(f)
print(f"{round(c,2)} , degrees Celsius")