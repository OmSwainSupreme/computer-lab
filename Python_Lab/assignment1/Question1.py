""" Write a Python program that prints all numbers from 1 to 100, but for multiples of 3 print 
"Fizz" instead of the number, for multiples of 5 print "Buzz", and for numbers which are multiples 
of both 3 and 5 print "FizzBuzz"."""

import sys
import time
lst=[n for n in range (1,100)]
for i in lst:
    if (i % 3) == 0:
        sys.stdout.write("Fizz\n")
    elif (i % 5) == 0:
        sys.stdout.write("Buzz\n")
    elif (i % 3) == 0 & (i % 5) == 0:
        sys.stdout.write("FizzBuzz\n")
    else:
        print(i)
    time.sleep(0.3)
    

sys.exit("Your program is existed sucessfully!!!")