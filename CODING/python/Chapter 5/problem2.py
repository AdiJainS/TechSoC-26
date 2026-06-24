#n =input("Enter number :")
#s.add(int(n))
#n =input("Enter number 2:")
#print(s.add(int(n)))
#n =input("Enter number 3:")
#s.add(int(n))
#n =input("Enter number 4:")
#s.add(int(n))
#n =input("Enter number 5:")
#s.add(int(n))
#n =input("Enter number 6:")
#s.add(int(n))
#n =input("Enter number 7:")
#s.add(int(n))
#n =input("Enter number 8:")
#set.add(int(n))

#print(s) this code not working

numbers = []

# Input 8 numbers from user
for i in range(8):
    num = int(input(f"Enter number {i+1}: "))
    numbers.append(num)

# Convert to set to get unique numbers
unique_numbers = set(numbers)

# Display unique numbers
print("Unique numbers are:", unique_numbers)

