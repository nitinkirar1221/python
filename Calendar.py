'''import calendar
year = int(input("enter a year="))
for month in range(1 , 13):

 
 print(calendar.month(year,month))'''    

m = str(input("enter the month"))
if(m=="1") or (m=="jan") or (m=="january"):
 for m in range(1,32):
  print("january",m)
elif(m=="2") or (m=="feb") or (m=="february"):
 for m in range(1,29):
  print("february",m)

elif(m=="3") or (m=="march") or (m=="mar"):
 for m in range(1,32):
  print("march",m)
elif(m=="4") or (m=="apr") or (m=="april"):
 for m in range(1,31):
  print("april",m)
elif(m=="5") or (m=="may"):
 for m in range(1,32):
  print("may",m)
elif(m=="6") or (m=="june"):
 for m in range(1,31):
  print("june",m)
elif(m=="7") or (m=="jul") or (m=="july"):
 for m in range(1,32):
  print("july",m)
elif(m=="8") or (m=="aug") or (m=="august"):
 for m in range(1,32):
  print("august",m)
elif(m=="9") or (m=="sep") or (m=="september"):
 for m in range(1,31):
  print("september",m)
elif(m=="10") or (m=="oct") or (m=="octuber"):
 for m in range(1,32):
  print("octuber",m)
elif(m=="11") or (m=="nov") or (m=="november"):
 for m in range(1,31):
  print("november",m)
elif(m=="12") or (m=="dec") or (m=="december"):
 for m in range(1,32):
  print("december",m)

