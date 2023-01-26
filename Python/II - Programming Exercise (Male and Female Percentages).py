# inputs
str_nmae = str(input("Enter your full name: "))
num_males = int(input("Enter the number of males in the class: "))
num_females = int(input("Enter the number of females in the class: "))

# calculations
total_students = num_males + num_females
percent_males = num_males / total_students * 100
percent_females = num_females / total_students * 100

# outputs
print("Percentage of males: ", percent_males, "%")
print("Percentage of females: ", percent_females, "%")
