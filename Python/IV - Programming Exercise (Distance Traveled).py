# Display
str_name = str(input("Full Name: "))
speed = int(input("What is the speed of the vehicle in mph? "))
hours = int(input("How many hours has it traveled? "))

# Loop & Display
distance = 0
output = "\nHour       Distance traveled\n" \
             "-------------------------\n"

for hour in range(hours):
    distance = speed * (hour + 1)
    
    output += format(hour + 1) + "     " + \
              format(distance) + "\n"
print(output)
