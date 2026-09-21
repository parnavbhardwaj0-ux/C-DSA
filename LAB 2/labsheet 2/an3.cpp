// Q3.Write a C++ program to Display a menu to convert Indian Rupees (INR) to:
// US Dollar (USD) — use a conversion rate of 1 INR = 0.012 USD

// Euro (EUR) — use a conversion rate of 1 INR = 0.011 EUR
// Japanese Yen (JPY) — use a conversion rate of 1 INR = 1.76 JPYcurrency converter !

# include <iostream> 
using namespace std ;

int main(){
    cout << "==============CURRENCY CONVERTER=============\n";
    double inr , converted;
    int choice;
    cout<< " 1. INR to USD (united state dollor): \n";
    cout << " 2. INR to EUR (EURO) : \n";
    cout<< " 3. INR into YEN (JPY) : \n";
    cout << "ENTER YOUR CHOICE : "; 
    cin >> choice;

    cout<< "enterr the amount in rupee (INR): ";
    cin>> inr;

    switch (choice)
    {
    case 1:
        converted =inr*0.012;
        cout << inr<< "INR =:"<<converted<< "Dollor"<<  endl;
        break;
    case 2:
        converted = inr*0.011;
        cout << inr << "INR = : "<< converted << "EURO" <<endl;
        break;
    case 3:
        converted = inr*1.76;
         cout<< inr << " INR = : "<< converted << "Yen" << endl;
         break;
    default:
        cout<< " INVALID CHOICE !!";
        break;
    }

}