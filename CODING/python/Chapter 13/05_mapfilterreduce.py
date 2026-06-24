#Map ex - it apllies a func to all the items map(function , input list)

l = [1,2,3,4,5]

sqaure = lambda x:x*x
sqList = map(sqaure ,l )
print(list(sqList))

#Filter ex-  creeates list of items for which fucn retains true
def even(n):
    if (n%2 == 0):
        return True
    return False

onlyEven = filter(even , l)
print(list(onlyEven))

#reduce ex-
from functools import reduce
def sum(a,b):
   return a+b
mul = lambda x,y :x*y
print(reduce(sum , l))
print(reduce(mul , l))







