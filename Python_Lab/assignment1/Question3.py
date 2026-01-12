"""  Write a Python program that asks the user for their age and prints: 
• "You are a child" if the age is less than 13, 
• "You are a teenager" if the age is between 13 and 19, 
• "You are an adult" if the age is 20 or older. """

import sys
Input=sys.argv[1]
if int(Input) <13:
    print("You are a child")
elif int(Input)>=13 and int(Input)<=19:
    print("You are a teenager")
elif int(Input) >=20:
    print("You are an adult")