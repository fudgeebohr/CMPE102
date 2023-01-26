# Get input from the user
str_name = str(input("Name: "))
height = float(input('Height (in): '))
weight = float(input('Weight (lbs): '))

# Calculate BMI
def bmi (height, weight):
    BMI = weight*703/(height**2)
    if (BMI <= 18.5):
        return 'Underweight', BMI
    if (BMI >= 18.5 and BMI <= 24.9):
        return 'Normal', BMI
    if (BMI >= 25 and BMI <= 29.9):
        return 'Overweight'
    if (BMI >= 30):
        return 'Obese'

quote, BMI = bmi(height, weight)
print('Body Mass Index (BMI): {} ({})'. format(BMI, quote))
