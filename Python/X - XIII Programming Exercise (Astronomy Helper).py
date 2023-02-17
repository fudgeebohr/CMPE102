str_name = str(input("Full Name: "))
while True:
    print("————— ASTRONOMY HELPER —————")
    print("Select a Planet:")
    print("(1) Mercury")
    print("(2) Venus")
    print("(3) Earth")
    print("(4) Mars")
    print("(5) Exit the program")
    
    planet = int(input("Enter your selection: "))
    
    if planet == 1:
        print("——— Mercury ———")
        print("Average distance from the sun: 57.9 million kilometers")
        print("Mass: 3.31 × 10^23kg")
        print("Surface temperature: -173 to 430 degrees Celsius")
        
    elif planet == 2:
        print("——— Venus ———")
        print("Average distance from the sun: 108.2 million kilometers")
        print("Mass: 4.87 × 10^24kg")
        print("Surface temperature: 472 degrees Celsius")
        
    elif planet == 3:
        print("——— Earth ———")
        print("Average distance from the sun: 149.6 million kilometers")
        print("Mass: 5.967 × 10^24kg")
        print("Surface temperature: -50 to 50 degrees Celsius")
        
    elif planet == 4:
        print("——— Mars ———")
        print("Average distance from the sun: 227.9 million kilometers")
        print("Mass: 0.6424 × 10^24kg")
        print("Surface temperature: -140 to 20 degrees Celsius")
        
    elif planet == 5:
        print("Exiting the program...")
        break
        
    else:
        print("Invalid selection. Please try again.")
        
