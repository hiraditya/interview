def prime(x):
    if(x == 0 or x == 1) :
        return 0
    i = 2
    while i * i <= x : 
        if (x % i == 0) :
            return 0
        i = i + 1
    return 1
 

def findPrime(n) :
    if (prime(n)):
        print(n, end = " ")
     
    elif (prime(n - 2)) : 
        print ("2", end = " ")
        print (n - 2, end = " " )
 
    else:
        print ( "3", end = " " )
        n = n - 3
        i = 0
        while i < n :
            if (prime(i) and prime(n - i)) :
                print(i, end = " ")
                print ((n - i), end = " ")
                break
            i = i + 1

findPrime(15)
