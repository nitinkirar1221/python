x = str (input("enter the value=:"))
n = int(input("enter the value"))


if (x=="a" or x=="b" or x=="c" or x=="d" or x=="e" or x=="f" or x=="g" or x=="h"  or x=="j" or x=="k" or x=="l" or x=="z"):
    print("alphabet")
    
    if (n>=0 or n<=0):
        print("numbers")
elif (n>0):
        print("positive")    
elif (n<0):
        print("negative")
else:
        print("zero")  