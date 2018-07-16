#GCD OF ARRAY OF MORE THAN 2 OR ARRAY NUMBERS
#FINDING GCD OF 2 NUMBERS
def gcdarray(x,y):
     
    while(y!=0):
        x,y = y,x%y
     
    return x
         
# Driver Code        
a= [5,10,16,32,40]
#FINDING GCD OF FIRST  2 NUMBERSS
 
x=a[0]
y=a[1]
gcd = gcdarray(x,y)
y=len(a)
#COMPARING ALREADY FOUND GCD TO OTHER NUMBER IN A LOOP AND THEN UPDATING IT.
 
for i in range(2,y):
     gcd =gcdarray(gcd,a[i])
     
print(gcd)
