n = int(input("enter the number"))
if(  n>0 or n%2==0):
    print("even and positive")
elif(n<0 or n%2!=0):
    print("odd or negative")
else:
    print("zero")