a=int(input("enter the value for year="))
if(a%400==0) or (a%100!=0 and a%4==0):
    print("its a leap year")
else: 
    print("its not a leap year")   
