import itertools

def longestpalindrome(string):
    longest, longestlen = '', 0
    for start, stop in itertools.combinations(range(len(string)+1), 2):
        substring= string[start:stop]
        if (len(substring) >longestlen) and (substring == substring[::-1]):
            longest, longestlen = substring, len(substring)
    print(longest)

#test case

a="this is noon"
longestpalindrome(a)
