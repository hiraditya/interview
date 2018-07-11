#finding intersection of 2 strings in Python
import difflib

def match(a,b):
    c=difflib.SequenceMatcher(None,a,b).get_matching_blocks()
    print(c)
    
#driver programme to test the code
d="forever"
e="ever"
match(d,e)
