class Employee:
    # name = "JohnDoe"
    language = "Python" #class attribute
    salary = 50000

JohnDoe = Employee()
JohnDoe.name = "John Doe" #object attribute
print(JohnDoe.name , JohnDoe.language, JohnDoe.salary)

Rohan = Employee()
Rohan.name = "Rohan"        
print(Rohan.name, Rohan.language, Rohan.salary)