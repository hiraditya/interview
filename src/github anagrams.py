#Learning about anagrams and returning the anagram pair together
class Word(object):
     def __init__(self, string, index):
        self.string = string
        self.index = index

def Duplicate(string, size):
    newarray = []

    
    for i in range(size):
        newarray.append(Word(string[i], i))
 
    return newarray
 

def Anagrams(wordArr, size):
  
    newarray = Duplicate(test, size)
 
  
    for i in range(size):
        newarray[i].string = ''.join(sorted(newarray[i].string))
 
    
    newarray = sorted(newarray, key=lambda k: k.string)
 
    
    for word in newarray:
        print (test[word.index])
 
# Driver program to test the code
test = ["cat", "pot", "tac", "meow", "act","top"]
size = len(test)
Anagrams(test,size)
