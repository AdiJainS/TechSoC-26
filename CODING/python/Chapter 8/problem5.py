# n = int(input("Enter a number: "))
# for i in range(1, n + 1):
    
#     print("*"*(i),end="")
#     print("")



def stars(n):
    if (n==0):
        return
    print("*" * n)
    stars(n - 1)

stars(5)

