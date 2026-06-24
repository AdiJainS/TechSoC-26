# using walrus operator
if (n:= len([1,2])) > 3:
    print(f"List is too long({n} elements , expected <=3)") 
else :
    print("list is fine")