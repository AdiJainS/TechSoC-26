l =[1 ,3, 6, 7]
# index =0 
# for item in l :

#print(f"The item number at {index} is {item}")
#index +=1

# this can be simplified by
for index , item in enumerate(l):
    print(f"The item number  at index {index} is {item}")