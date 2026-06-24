def divisible5 (n):
    if (n%5 ==0):
        return True
    return False

a = [ 1,4,56,7,8,7,3,67,5,10]
f = list(filter(divisible5 , a))
print(f)