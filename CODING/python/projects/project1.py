import random
# we have to import random module to use random.choice
computer = random.choice([-1, 0, 1])
# -1 for water, 0 for gun, 1 for snake
print("Welcome to Snake, Water, Gun")

youstr = input("Enter your Choice: ")
youDict = {"s": 1 ,"w":-1, "g": 0}
reverseDict = {1: "Snake", -1: "Water", 0: "Gun"}
you = youDict[youstr]
# if(computer == you):
#     print("It's a tie")
# else:
#     if ((computer == 1 and you == -1) (c -y = 2) or (computer == -1 and you == 0) or (computer == 0 and you == 1)):
#         print("You lose")
#     elif ((computer == -1 and you == 1) or (computer == 0 and you == -1) or (computer == 1 and you == 0)):
#         print("You win")
#     else:
#         print("Fuck you, you cheater")
if ((computer - you) == -1 or (computer - you) )== 2: # subtraction
         print("you lose")
else:
            print("you win")

print(f"You chose {reverseDict[you]} and computer chose {reverseDict[computer]}")
