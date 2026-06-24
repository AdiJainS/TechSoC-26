class Employee:
    salary =234
    increment = 20
    @property
    def salaryAfterIncrement(self ):
        return (self.salary + self.salary * (self.increment / 100))

    @salaryAfterIncrement.setter
    def salaryAfterIncrement(self , salary):
       self.increment = (salary/self.salary -1)*100

e = Employee()
#print(e.salaryAfterIncrement)  # This will raise an error because salaryAfterIncrement is not properly defined as a property method.
e.salaryAfterIncrement = 280  # This will raise an error because salaryAfterIncrement is read-only.
print(e.increment)