class Calculator:
    def __init__(self , n):
        self.n = n

    def square(self):
        print(f"The sqaure of {self.n*self.n}")
    def cube(self):
        print(f"The cube of {self.n*self.n*self.n}")
    def squareRoot(self):
        print(f"The square root of {self.n**0.5}")
    

n = int(input("Enter a number: "))
    
a = Calculator(n)
a.square()
a.cube()
a.squareRoot()  