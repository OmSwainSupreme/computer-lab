"""   Write a program that finds the sum of all even numbers between 1 and 100 using a for loop """

import sys 
lst=[i for i in range (1,101) if (i % 2 == 0)]
total=sum(lst)
sys.stdout.write(f"{total}")
