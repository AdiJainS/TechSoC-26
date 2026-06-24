class Employee:
    # name = "JohnDoe"
    language = "Python" #class attribute
    salary = 50000

JohnDoe = Employee()
JohnDoe.name = "John Doe" #object attribute
JohnDoe.language = "JS" #changing class attribute for this object
print(JohnDoe.name , JohnDoe.language, JohnDoe.salary)
#Instance attributes can override class attributes