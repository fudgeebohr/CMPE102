import random

def lotteryNumberGenerator():

    loop = 0
    lotteryNumbers = [0]*7

    while(loop < len(lotteryNumbers)):
        lotteryNumbers[loop] = random.randint(0, 9)
        print(lotteryNumbers[loop], end=" ")
        loop+=1

str_name = str(input("Full Name: "))

print("Generated Lottery Numbers: ", end="")
lotteryNumberGenerator()
