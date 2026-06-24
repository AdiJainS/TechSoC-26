from functools import reduce
l = [111 ,2 , 65 ,456 , 678]
def gr(a , b):
    if a>b:
        return a
    return b

print (reduce(gr ,l))