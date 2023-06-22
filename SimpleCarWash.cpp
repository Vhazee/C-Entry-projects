#include <iostream>
using namespace std;


//Dislays car types to choose from
void displayCarTypes()
{
    cout << "Select Hatchback (H/h), Truck (T/t), SUV (S/s): "<< endl;
}

//Function that takes character to select car type 
char carSelect(char carType)
{
    if(carType == 't' || carType == 'T')
    {
        cout << "Truck selected"<<endl;
    }
    else if(carType == 'S' || carType == 's')
    {
        cout << "Suv selected"<<endl;
    }
    else if(carType == 'H' || carType == 'h')
    {
        cout << "Hatchback selected"<< endl;
    }
    else if(carType == 'O' || carType == 'o')
    {
        cout << "Other type of vehicle" << endl;
    }
    else
    {
        while (carType != 'O' && carType != 'o' && carType != 'H' && carType != 'h' && carType != 'S' && carType != 's' && carType != 'T' && carType != 't')
        {
            cout << "Selected car type doesn't exist"<< endl;
            cout << "Select Hatchback (H/h), Truck (T/t), SUV (S/s) or Other (O,o): ";
            cin >> carType;
            
        }
    }
    return carType;
}

//Function thar returns the total price based on selected car type and car wash type
double prices(char washType, char carType)
{
    double basePriceOutside = 40.00;
    double insidePriceTruck = 45.00;
    double insidePriceSuv = 35.00;
    double insidePriceHatch = 25.00;
    double insidePriceOther = 30.00;
    double price;
    
//Conditional statement to choose different car types and car washes    
    if((washType == 'I' || washType == 'i') && (carType == 'H' || carType == 'h'))
    {
        price = insidePriceHatch;
    }
    if((washType == 'O' || washType == 'o') && (carType == 'H' || carType == 'h'))
    {
        price = basePriceOutside;
    }
    if((washType == 'F' || washType == 'f') && (carType == 'H' || carType == 'h'))
    {
        price = basePriceOutside + insidePriceHatch;
    }
    if((washType == 'I' || washType == 'i') && (carType == 'T' || carType == 't'))
    {
        price = insidePriceTruck;
    }
    if((washType == 'O' || washType == 'o') && (carType == 'T' || carType == 't'))
    {
        price = basePriceOutside;
    }
    if((washType == 'F' || washType == 'f') && (carType == 'T' || carType == 't'))
    {
        price = basePriceOutside + insidePriceTruck;
    }
    if((washType == 'I' || washType == 'i') && (carType == 'S' || carType == 's'))
    {
        price = insidePriceSuv;
    }
    if((washType == 'O' || washType == 'o') && (carType == 'S' || carType == 's'))
    {
        price = basePriceOutside;
    }
    if((washType == 'F' || washType == 'f') && (carType == 'S' || carType == 's'))
    {
        price = basePriceOutside + insidePriceSuv;
    }
    if((washType == 'I' || washType == 'i') && (carType == 'O' || carType == 'o'))
    {
        price = insidePriceOther;
    }
    if((washType == 'O' || washType == 'o') && (carType == 'O' || carType == 'o'))
    {
        price = basePriceOutside;
    }
    if((washType == 'F' || washType == 'f') && (carType == 'O' || carType == 'o'))
    {
        price = basePriceOutside + insidePriceOther;
    }
    return price;
}


int main()
{
    //displays what type of car to choose from given list
    displayCarTypes();
    
    char type;
    cout << "Select car: ";
    cin >> type;
    
    cout<<carSelect(type)<< endl;
    
    char typeOfWash;
    cout << "Select the wash parameters for your car: ";
    cin >> typeOfWash;
    //Loops through type of car washes if the given ones are not selected.
    //User should choose from the given list
    while(typeOfWash != 'I' && typeOfWash != 'i' && typeOfWash != 'O' && typeOfWash != 'o' && typeOfWash != 'F' && typeOfWash != 'f')
    {
      cout << "Select correct parameters from the ones given: ";
      cin >>typeOfWash;
    }
    //Displays the final price the customer has to pay
    cout << "The total price will be R" << prices(typeOfWash, type) << endl;
    return 0;
}