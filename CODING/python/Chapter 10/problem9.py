class Complex:
    def __init__(self, r ,i):
        self.r =r
        self.i =i
    
    def __add__(self , c2):
        return Complex(self.r +c2.r ,self.i + c2.i)
    def __mul__(self, c2):
        r = self.r * c2.r - self.i * c2.i
        i = self.r * c2.i + self.i * c2.r
        return Complex(r, i)


    

p = int(input("Enter real part of 1st complex number: "))
q = int(input("Enter imaginary part of 1st complex number: "))
r = int(input("Enter real part of 2nd complex number: "))
s = int(input("Enter imaginary part of 2nd complex number: "))

c1 = complex(p,q)
c2 = complex(r,s)
c3 = c1 +c2
print(c3)
c4 = c1 * c2
print(c4)