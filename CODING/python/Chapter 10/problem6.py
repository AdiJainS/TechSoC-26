class TwoDV:
     def __init__(self , i ,j):
            self.i = i
            self.j = j
     def show(self):
        print(f"The values are {self.i}i + {self.j}j")
class ThreeDV(TwoDV):
    def __init__(self , i ,j ,k):
        super().__init__(i , j)
        self.k = k

    def show(self):
        print(f"The values are {self.i}i+ {self.j}j + {self.k}k")

A = TwoDV(1,2)
A.show()
B = ThreeDV(1,2,3)
B.show()
