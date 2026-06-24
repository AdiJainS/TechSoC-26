marks = int(input("Enter your marks:"))

if (marks<=100 and marks >=90):
    # print("Grade : Ex", marks)
    Grade = "Ex"
if (marks<=90 and marks >=80):
    print("Grade : A", marks)
if (marks<=80 and marks >=70):
    print("Grade : B", marks)
if (marks<=70 and marks >=60):
    print("Grade : C", marks)
if (marks<=60 and marks >=50):
    print("Grade : D", marks)
if (marks<=50 and marks >=0):
    print("Grade : F", marks)

print("Your grade is :", Grade)
