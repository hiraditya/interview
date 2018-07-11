#finding closet pair to x in a given array(sorted)
import sys
 
def close(array1, array2, m, n, x):
    diff=sys.maxsize
    l = 0
    r = n-1
    while(l < m and r >= 0):
     
   
        if abs(array1[l] + array2[r] - x) < diff:
            resultl = l
            resultr = r
            diff = abs(array1[l] + array2[r] - x)
     
        if array1[l] + array2[r] > x:
            r=r-1
        else:
            l=l+1
     
 
    print("The resultant pair is [",
         array1[resultl],",",array2[resultr],"]")

#driver programme to test this code

a1 = [1, 3, 7, 11]
a2 = [13, 26, 30, 40]
m = len(a1)
n = len(a2)
x = 38
close(a1, a2, m, n, x)
