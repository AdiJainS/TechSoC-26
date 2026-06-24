
# from random import randint

# class Train:
#     def __init__(self, trainNo):
#         self.trainNo = trainNo
#     def book(self ,trainNo , fro ,to):
#         print(f"Ticket is booked in train no. : {trainNo} from {fro} to {to}")
        

#     def status(self , trainNo):
#         print(f"Ticket is booked in train no. : {trainNo} is running on time")

#     def getFare (self ,trainNo , fro ,to):
#         fare = random.randint(100, 500)
#         print(f"Ticket is booked in train no. : {trainNo} from {fro} to {to}. Fare is: {fare}")
#         pass

# t =Train(12345)
# t.book("Delhi", "Mumbai")
# t.status() 
# t.getFare( "Delhi", "Mumbai")

from random import randint

class Train:
    def __init__(self, trainNo):
        self.trainNo = trainNo   # save train number when creating object

    def book(self, fro, to):
        print(f"Ticket is booked in train no. {self.trainNo} from {fro} to {to}")
        
    def status(self):
        print(f"Train no. {self.trainNo} is running on time")

    def getFare(self, fro, to):
        fare = randint(100, 500)
        print(f"Fare for train no. {self.trainNo} from {fro} to {to} is: {fare}")


# Using the class
t = Train(12345)
t.book("Delhi", "Mumbai")
t.status()
t.getFare("Delhi", "Mumbai")

