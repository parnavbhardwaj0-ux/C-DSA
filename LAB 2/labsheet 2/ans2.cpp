// //area of circle , rectangle , traingle .
// #include <iostream>
// #include <cmath>
// using namespace std;
// double  area_circle ( double radius){
//     return M_PI*radius*radius;
// }
// double area_rectangle (double length,double width){
//     return length*width;
// }
// double area_triangle (double base , double height ){
//     return 0.5*base*height;
// }
// int main()
// {
//     int choice;
//     double radius,lenght,width,base,height ;
//     cout << " =========AREA CALCULATOR======== \n";
//     cout << " 1. Circle \n";
//     cout << " 2. Rectangle \n";
//     cout << " 3. Traingle \n ";
//     cout << "Enter your choice (1-3) \n";
//     cin>> choice ;
//     switch (choice)
//     {
//     case 1:
//         cout << " Enter the radius of circle : ";
//         cin>> radius;
//         cout<< " Area of circle= "<< area_circle(radius)<<endl;
//         break;
//     case 2:
//         cout << " Enter the length and width of reactangle  : ";
//         cin>> lenght>>width;
//         cout<< " Area of rectangle= "<< area_rectangle(lenght,width)<<endl;
//         break;
//     case 3:
//         cout << " Enter the base and height  of triangle : ";
//         cin>> base>>height;

//         cout<< " Area of traingle= "<< area_triangle(base,height)<<endl;
//         break;

//     default:
//     cout<< " invalid choice !!";
//         break;
//     }
// }



# include <iostream>
# include <cmath>
using namespace std;

double area_circle(double radius){
    return M_PI *radius*radius;
}
double area_rectangle(double length , double width){
    return length*width ;
}
double area_triangle(double base , double height){
    return 0.5*base , height;
}
int main(){
    int choice ;
    double radius ,length ,width, height, base;
    cout<<"======AREA CALCULATOR=======\n";
    cout << "1. circle \n";
    cout<< "2. rectangle\n";
    cout<< "3. triangle\n";
    cout << "enter your choice (1-3): \n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout<< " enter the radius of circle : \n";
        cin>> radius;
        cout << " area of circle is "<< area_circle(radius);
        break;
    case 2:
        cout << " enter the length and width of rectangle : \n";
        cin>> length >>width ;
        cout << " area of rectanglr is "<< area_rectangle<< endl;
    case 3:
    cout << " enter th base and height of triangle.\n";
    cin>> base >> height;
    cout<< "area of triangle is " << area_triangle<< endl;

    default:
     cout << " Invalid choice !!!!!!!!\n";
        break;
    }

}