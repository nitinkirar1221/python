a = int(input("enter the value"))
b = str(input("enter symbol")) 
c = int(input("enter the value"))


if(b=="+"):
    print("add",a+c)
elif(b=="-"):
    print("sub",a-c)
elif(b=="*"):
    print("mul",a*c)
elif(b=="/"):
    print("div",a/c)
elif(b=="%"):
    print("module",a%c)
elif(b=="**"):
    print("exponation",a**c)
else:
    print("enter valid symbol")   
