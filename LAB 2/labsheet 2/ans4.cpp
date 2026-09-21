//Q4.Write a C++ program to Display a menu to convert temperature between:
// • Celsius to Fahrenheit
// • Fahrenheit to Celsius
// • Celsius to Kelvin.

# include<iostream>
using namespace std;

int main (){
    int choice ;
    double converted; 
    double celsius, fahrenheit, kelvin;
    cout << " ============= temperature converter. ==========\n";
    cout << " 1. Celsius into fahrenheit . \n";
    cout << " 2. fahrenheit into Celsius . \n";
    cout << " 3. Celsius into kelvin. \n";
    cout << " enter your choice : ";
    cin>> choice ;

    switch (choice)
    {
    case 1:
        converted = (celsius*9/5)+32;
        cout<< " enter the temp. in clesius :";
        cin >> celsius;
        cout << celsius<<" Celsius = "<< converted << " fahrenheit " << endl;
        break;
    case 2:
         converted = (fahrenheit-32)*5/9;
         cout << "Enter the temperatur in fahrenheit : ";
         cin >> fahrenheit;
         cout << fahrenheit << " fahrenheit = "<< converted << " Celsius" << endl;
         break;
    case 3:
        converted = celsius+273.15;
        cout << "Enter the ttemperature in Celsius: ";
        cin >> celsius;
        cout << celsius << " Celsius = " << converted <<" Kelvin " << endl; 
        break; 
    default:
         cout << "INVALID CHOICE UNCLE G !!!!!";
        break;
    }
}