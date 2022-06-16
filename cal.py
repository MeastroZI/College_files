def cal():

    a=int(input("enter your first number\n"))
    b=int(input("enter your second number\n"))
    c=str(input("enter your operator\n"))
    
    if c=="+":
        print ("addition of two number is:" ,a+b)
    elif c=="-" :
        print("substraction of two number is :", a-b)
    elif c=="*" :
        print("multiplication of two number is :", a*b)
    elif c=="/" :
        print("division of two number is :", a/b)
        
    else:
        print("error:enter a valid operator")
        
cal()
        
    

    
