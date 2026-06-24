class Employee:
    company = "Microsoft"
    def show(self):
        
        print(f"The name is {self.company} and the comapny is {self.company}")
    
class Coder:
    language = "Python"
    def printLanguage(self):
        print(f"out of all the languages here is ur lang {self.language}")

class Programmer(Employee , Coder):
    company = "Google"
    def showLanguage(self):
        print(f"The name is {self.company} and the salary is {self.language}")


A =    Employee()
B = Programmer()
B.show()
B.printLanguage()
B.showLanguage()

print(A.company , B.company)