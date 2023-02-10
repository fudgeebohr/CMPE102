import random

lottery_number = []

for i in range(7):
    lottery_number.append(random.randint(0,9))
    
str_name = str(input("Full Name: "))
print("Number 1: Lottery Number Generator")
print("Generated Lottery Numbers:",lottery_number)
