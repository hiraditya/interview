#MAXIMISING THE SUM OF ARR[I]*I
def maxsum(arr):
 
    n=len(arr)
    #SORTING THE ARRAY ,BY SORTING ONLY WE GET THE REQUIRED RESULT.
    arr.sort()
    sum = 0
    for i in range(n):
        sum += arr[i] * i
         
    return sum
 
# Driver Program
arr = [3,5,6,1]
print(maxsum(arr))
