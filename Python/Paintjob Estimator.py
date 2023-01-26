# inputs
str_name = str(input("Name: "))
wallArea = float(input("Area of the wall (sqft): "))
paintPrice = float(input("Price of the paint (per gallon) (USD): "))

# calculations
paintGallon = wallArea/115
totalLaborTime = paintGallon*8
paintCost = paintGallon*paintPrice
laborCost = totalLaborTime*20
totalCost = laborCost + paintCost

laborTimeHoursInt = (int(totalLaborTime))
laborTimeMinutesFloat = (float(totalLaborTime - laborTimeHoursInt))
laborTimeMinutesInt = (int(60*laborTimeMinutesFloat))

paintCostString = "{:.2f}".format(paintCost)
paintGallonString = "{:.2f}".format(paintGallon)
laborCostString = "{:.2f}".format(laborCost)
totalCostString = "{:.2f}".format(totalCost)

#outputs
if(paintGallon == 1):
    print("Paint required (gallons): " , paintGallonString)
else:
    print("Paint required (gallons): " , paintGallonString)
    
if(laborTimeMinutesInt == 0):
    print("Labor required (hours): " , laborTimeHoursInt)
else:
    print("Labor required (hours & minutes): " , laborTimeHoursInt , "Hours, " , laborTimeMinutesInt , "Minutes")
    
print("Paint cost (USD): " , paintCostString)
print("Labor cost (USD): " , laborCostString)
print("Total cost (USD): " , totalCostString)
