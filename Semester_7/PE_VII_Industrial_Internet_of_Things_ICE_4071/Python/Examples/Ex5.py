# If statement
a = 33
b = 200
if b > a:
    print ("b is greater than a")
    print ("done…")

# Get user inputs
a=int(input("Enter a value : "))
b=int(input("Enter b value : "))
c=int(input("Enter c value : "))
if (a>b) and (a>c):
    print("Maximum value is :",a)
elif (b>a) and (b>c):
    print("Maximum value is :",b)
else:
    print("Maximum value is :",c)

