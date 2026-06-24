a = int(input("Enter no.1 :"))
b = int(input("Enter no.2 :"))
c = int(input("Enter no.3 :"))
d = int(input("Enter no.4 :"))

if(a>b and a>c and a>d):
    print("a is the greatest no.", a)
if(b>a and b>c and b>d):
    print("b is the greatest no.",b)
if(c>a and b<c and c>d):
    print("c is the greatest no.",c)
if(d>b and d>c and a<d):
    print("d is the greatest no.",d)