def fib(n):
    count = 0
    if n==0:
        return 0 
    elif n==1:
        return 1 
    else: 
        return (fib(n-1)+fib(n-2))
    
num = int(input("enter the no you want to check :"))
for n in range(0,num):
    print(fib(n))