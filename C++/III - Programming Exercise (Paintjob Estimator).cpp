#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    string name;
    int laborTimeHoursInt, laborTimeMinutesInt;
    double wallArea, laborCost, laborTimeMinutesDouble, totalLaborTime, paintGallon, paintCost, paintPrice, totalCost;
    
    cout << "Name: ";
    getline(cin, name);
    
    cout << "Area of the wall (sqft): ";
    cin >> wallArea;
    cout << "Price of the paint (per gallon) (USD): ";
    cin >> paintPrice;
    cout << endl;
    
    paintGallon = wallArea/115;
    totalLaborTime = paintGallon*8;
    paintCost = paintGallon*paintPrice;
    laborCost= totalLaborTime*20;
    totalCost = laborCost + paintCost;
    
    laborTimeHoursInt = static_cast<int>(totalLaborTime);
    laborTimeMinutesDouble = static_cast<double>((totalLaborTime - laborTimeHoursInt));
    laborTimeMinutesInt = static_cast<int>((60*laborTimeMinutesDouble));
    
    if(paintGallon == 1){
        cout << "Paint required (gallon): " << paintGallon << endl;
    }else{
        cout << "Paint required (gallon): " << paintGallon << endl;
    }
    
    cout << "Labor required (hours): " << laborTimeHoursInt;
    if(laborTimeMinutesInt == 0){
        cout << endl;
    }else{
        cout << "Labor required (hours & minutes): " << laborTimeHoursInt << " Hours, " << laborTimeMinutesInt << " Minutes" << endl;
    }
    
    cout << "Paint cost (USD): " << paintCost << endl;
    cout << "Labor cost (USD): " << laborCost << endl;
    cout << "Total cost (USD): " << totalCost;
    
}
