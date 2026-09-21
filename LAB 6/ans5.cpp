// Q4. Write a programme to create functions to demonstrate function overloading using
// Area calculation for circle, rectangle &amp; triangle.

# include <iostream>    
# include <cmath>
 using namespace std ;
 
 float area(float r){               // area of circle
    return 3.14*r*r;
 }
 
 float area(float l , float b){     // area of rectangle
    return l*b;
 }
 
 float area(float base , float height , int ){   // area of triangle
    return 0.5*base*height;
 }
 
 int main(){ 
   float r , l , b , base , height;
   int choice ; 
  cout << " enter your choice 1. circle 2. rectangle 3. triangle :->  " ;
  cin >> choice ;

  switch ( choice ){ 
      case 1: 
         cout << " enter the radius " ;
         cin >> r ;  
         cout << "Area of circle is : " << area(r) << endl;
         break;
      case 2: 
         cout << " enter the length and breadth " ;
         cin >> l >> b ;  
         cout << "Area of rectangle is : " << area(l, b) << endl;
         break;
      case 3: 
         cout << " enter the base and height " ;
         cin >> base >> height ;  
         cout << "Area of triangle is : " << area(base, height, 0) << endl;
         break;
      default:
         cout << " invalid choice " << endl;
   //  cout << "enter the radius of circle ";
   //  cin>>r;
   //  cout << "Area of circle is : " << area(r) << endl;
   //  cout << "enter the lenght and breadth of rectangle ";
   //  cin>>l>>b;
   //  cout << "Area of rectangle is : " << area(l , b) << endl;

   //  cout << "enter the base and height of triangle ";
   //  cin>>base>>height;
   //  cout << "Area of triangle is : " << area(base , height , 0) << endl;
  }
 return 0; 
 }
