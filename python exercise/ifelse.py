#magicnumber=25
#for n in range(101):
    #if n is magicnumber:
      #  print(n,"is the magic number!")
      #  break
   # else:
      #  print (n)
numbersTaken=[2,5,12,33]
print ("here are number that are sill available")
for n in range (0,20):
    if n in numbersTaken:
        continue
    print(n)