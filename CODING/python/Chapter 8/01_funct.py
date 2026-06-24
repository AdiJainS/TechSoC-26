
#function definition
def avg():
    n = int(input("Enter the number of elements: "))
    total =0
    for i in range(1 , n + 1):
        num = float(input(f"Enter number {i}: "))
        total += num
    average = total / n
    print(f"The average of the entered numbers is: {average}")

    ''' def avg():
     n = int(input("Enter the no of elemets:"))
      total = 0 
       for i in range (1 , n+1): '''

avg() # function call 
avg()  
avg()  