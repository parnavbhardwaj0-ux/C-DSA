//Q5.Write a C++ program to Display a menu to Unit Converter (Length)
// Convert meters to:
// • Kilometers
// • Centimeters
// • Millimeters

# include <iostream>
using namespace std;
int main(){
    int choice ;
    double kilometer , meter , centimeter ,millimeter, converted;
    cout << " ================unit converter===========\n";
    cout << " 1. meter into kilometer .\n";
    cout << " 2. meter into centimeter.\n";
    cout << " 3. meter into millimeter. \n";
    cout <<"Enter your choice :";
    cin  >> choice ;
    
    cout << " Enter the value in meters :";
    cin>> meter;

    switch (choice)
    {
    case 1:
           converted = meter/1000;
           cout << meter<<" meter ="<< converted<< "kilometer."<<endl;
        break;
    case 2:
         converted = meter*100;
         cout<< meter <<" meter ="<< converted<< "centimeter" << endl;
         break;
    case 3:
         converted = meter*1000;
         cout << meter << " meter = "<< converted<<" millimeter"<< endl;
         break;
    default:
     cout << "INVALID CHOICE ." << endl;
        break;
    }

}