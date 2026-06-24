class Employee:
    def __init__(self):
        print("constructor of Employee")
    a =1

class Programmer(Employee):
    def __init__(self):
            print("constructor of programme")
    b =2

class Manager(Programmer):
    def __init__(self):
           super(). __init__()
           print("constructor of manager")  
    c =3

# o =Employee()
# print(o.a)
#print(o.b) # error
# o = Programmer()
# print(o.a,o.b)
o =Manager()
print(o.a,o.b,o.c)