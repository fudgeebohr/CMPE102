str_name = str(input("Full Name: "))

def power(base, exponent):
    if exponent == 0:
        return 1
    else:
        return base * power(base, exponent - 1)

base = float(input("Enter the base: "))
exponent = int(input("Enter the exponent: "))

result = power(base, exponent)

print(base, "raised to the power of", exponent, "is", result)
