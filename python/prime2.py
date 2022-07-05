x=int(input('enter your number : '))
# condi=bool(True)

for i in range(2,x):
    if((x%i)==0):
        
        print(x,"is composite")
        # condi=True
        break
    
else:
    print(x,"is prime")
        