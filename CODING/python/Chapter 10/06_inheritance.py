class Employee:
    company = "Microsoft"
    def show(self):
        
        print(f"The name is {self.name   } and the salary is {self.salary}")
    
# class Programmer:
#     company = "Google"
#     def show(self):
        
#         print(f"The name is {self.name} and the salary is {self.salary}")
    
#     def showLanguage(self):
#         print(f"The language is {self.language}")

class Programmer(Employee):
    company = "Google"
    def showLanguage(self):
        print(f"The name is {self.name} and the salary is {self.salary}")


A =    Employee()
B = Programmer()

print(A.company , B.company)