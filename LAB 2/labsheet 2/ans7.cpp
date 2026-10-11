//Q7.Write a menu-driven C++ program to calculate the surface area of:
// 1. Sphere
// 2. Cylinder
// 3. Cone
// 4. Cube

#include <iostream> 
# include <cmath>
using namespace std;

int main(){
    int choice;
    double radius , side ,height, surface_area ;

    cout << "===== Surface Area Calculator =====\n";
    cout << "1. Sphere\n";
    cout << "2. Cylinder\n";
    cout << "3. Cone\n";
    cout << "4. Cube\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1 :
        cout << " enter the radius of sphere: ";
        cin>> radius;
        surface_area = 4 *M_PI *pow(radius, 2);
        cout << " surface area os sphere is "<< surface_area;
        break;
    case 2:
         cout << " enter the radius of cylinder: ";
         cin>> radius ;
         cout << " Enter the height of cylinder: ";
         cin >> height;
         surface_area= 2 * M_PI * radius * (radius + height);
         cout << " surface area of cylinder is "<< surface_area;
         break ;
    case 3: 
         cout << " Enter the radius of cone : ";
         cin>> radius;
         cout << " Enter the height of cone :";
         cin>> height;
         {
            double slant = sqrt(pow(radius, 2) + pow(height, 2));
            surface_area = M_PI * radius * (radius + slant);
        }  
          cout << " Surface area of cone = "<< surface_area << endl;
          break;
    case 4:
         cout  << " Enter the side of cube :";
         cin>> side;
         surface_area=6*pow(side,2);
         cout << "Surface area of cuben is  "<< surface_area << endl;
         break;
    default:
         cout << "invalid choice !!";
        break;
    }
} 
