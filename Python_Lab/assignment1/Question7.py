character=input("Enter your character:-")
if character.isalpha()==True and len(character)==1:
    if character in ["a","e","i","o","u","A","E","I","O","U"]:
        print("The character is a vowel")
    else:
        print("The character is a consonant")
else:
    print("Please enter a single alphabetic character.")