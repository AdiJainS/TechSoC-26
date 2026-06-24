# class Employee:
#     # name = "JohnDoe"
#     language = "Python" #class attribute
#     salary = 50000

# def getInfo(self):
#     print(f"The language is {self.language} and the salary is {self.salary}")

# JohnDoe = Employee()
# # JohnDoe.name = "John Doe" #object attribute
# JohnDoe.language = "JS" #changing class attribute for this object
# JohnDoe.getInfo()
# Employee.getInfo(JohnDoe)
# # print(JohnDoe.name , JohnDoe.language, JohnDoe.salary)
# # #Instance attributes can override class attributes
class Employee:
    # Class attributes
    language = "Python"
    salary = 50000

    # Method defined inside the class
    def getInfo(self):
        print(f"The language is {self.language} and the salary is {self.salary}")


# Create an object
JohnDoe = Employee()

# Override class attribute only for this object
JohnDoe.language = "JS"

# Method calls
JohnDoe.getInfo()           # works directly
Employee.getInfo(JohnDoe)   # equivalent (pass object manually)
