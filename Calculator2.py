
print("choose the symbol  +,-,*,/,**")

b = str(input("enter symbol"))
a = int(input("enter the number"))
c = int(input("enter the number"))

if(b=="+"):
    print("add",a+c)
    if(b=="-"):
        print("sub",a-c)
        if(b=="*"):
            print("mul",a*c)
            if(b=="/"):
                print("div",a/c)
