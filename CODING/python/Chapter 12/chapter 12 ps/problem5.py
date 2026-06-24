n = int(input("Enter a number: "))

with open("tables.txt", "a") as f:
    f.write(f"Table of {n}:\n")
    for i in range(1, 11):
        f.write(f"{n} x {i} = {n*i}\n")
    f.write("\n")
