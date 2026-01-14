def is_anagram():
    str1=input("Enter your first string:- ")
    str2=input("ENter your second string:-")
    list1=list(str1)
    list2=list(str2)
    while True:
        if " " in list1 :
            list1.remove(" ")
        if " " in list2 :
            list2.remove(" ")
        if " " not in list1 and " " not in list2:
            break
    if sorted(list1) == sorted(list2):
        print("The two strings are anagrams")
    else:
        print("The two strings are not anagrams")

is_anagram()