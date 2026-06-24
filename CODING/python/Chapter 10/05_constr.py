class Employee:
    language = "Python"  # class attribute
    salary = 120000

    def getInfo(self):
        print(f"The language is {self.language} and the salary is {self.salary}")
    def greet(self):
        print("good morning")

Harry = Employee()
Harry.name = "Harry"
print(Harry.name ,Harry.salary )


