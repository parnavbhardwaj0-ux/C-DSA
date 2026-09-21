//check percentage of a student and display pass if it greater than 40% otherwise display fail
#include <iostream>
using namespace std;

int main()
{
    float percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;

    if (percentage > 40.0)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;

    return 0;
}
