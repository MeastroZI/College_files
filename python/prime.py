x=int(input('enter your number : '))
condi=bool(True)

for i in range(2,x):
    if((x%i)!=0):
        print(x,"is prime")
        condi=False
        
    elif((x%i)==0):
        
        
        condi=True
        break
    
if (condi==True):
   print(x,"is composite")
    
elif(condi==False):
    print(x,"is prime")