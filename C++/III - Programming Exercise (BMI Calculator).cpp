{

    string name, bmiRating;
    double height, weight, bmi;
    
    cout << "Name: ";
    getline(cin, name);
    
    cout << "Height (in): ";
    cin >> height;
    
    cout << "Weight (lbs): ";
    cin >> weight;
    
    bmi = (weight / (pow(height,2)))*703;
    
    if(bmi <= 18.5){
        bmiRating = "Underweight";
    }else if(bmi >= 18.6 && bmi <= 24.9){
        bmiRating = "Normal";
    }else if(bmi >= 25.0 && bmi <= 29.9){
        bmiRating = "Overweight";
    }else if(bmi >= 30){
        bmiRating = "Obese";
    }
    
    cout << "Body Mass Index (BMI): " << bmi << " (" << bmiRating << ")";
    
}
