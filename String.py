#  Reverse String
def reverse_string(s):
    return s[::-1]

print(reverse_string("hello"))


# palindrom string 
def Palindrome_string(s):
    if s == s[::-1]:
        print(f"{s} is a palindrome string")
    else:
        print(f"{s} is not a palindrome string")

Palindrome_string("naman")


# count vowels in string 
def count_vowel(s):
    vowels = ["a", "e", "i", "o", "u"]
    v = 0
    c = 0
    for i in s.lower():
        if i.isalpha():
            if i in vowels:
                v += 1
            else:
                c += 1
    return [v, c]

str = "hello"
count = count_vowel(str)
print(f"{str} has {count[0]} vowels")
print(f"{str} has {count[1]} consonants")



# count char in word
def count_individual_char(char):
    counter  ={}
    s = char.upper()
    for ch in s:
        if ch.isalpha():
            if ch in counter:
                counter[ch]+=1
            else:
                counter[ch] = 1
    for count in counter:
        print(f"{count}: {counter[count]}") 

        
count_individual_char("hello")


# remove duplicate char in word
def remove_duplilcate_char(char):
    res = ""
    ch = char.upper()
    for c in ch:
        if c not in res:
            res+=c
    
    for i in res:
        print(i.lower(),end="")

remove_duplilcate_char("programming")   