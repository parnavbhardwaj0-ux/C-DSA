// nested loops : square number = 4. 
// types of PATTERN 1. stars , 2. number , 3. character 
// #include <iostream> 
// using namespace std;

// #include <iostream>
// using namespace std;

// int main () 
// {
//     int n = 4;
//     char ch = 'A';  
    
//     for(int i = 1 ; i<=n; i++ )  
//     {
//         for(int j = 1 ; j<=n ; j++) 
//         {
//             cout << ch << " ";  
//         }
//         cout << endl;
//         ch = ch + 1;  // update after finishing a row
//     }
//     return 0;
// }

// for * ( star ): 
// #include <iostream>
// using namespace std;

// int main() 
// { 
//     int n = 5;

//     for( int i=0; i<n; i++ ) 
//     {
//         for( int j=0; j<i+1; j++) // i++ is limit to no. of line or number of object  in one line .
//         {
//             cout << "* ";
//         }
//         cout << endl ;
//     }
//     return 0;
// }

// for digits  :
// #include <iostream>
// using namespace std;

// int main() 
// { 
//     int n = 5 ;
//     int num = 1;

//     for( int i=0; i<n; i++ ) 
//     {
//         for( int j=0; j<i+1; j++) // i++ is limit to no. of line or number of object  in one line .
//         {
//             cout << num << " ";
//             num++ ;
//         }
//         cout << endl ;
//     }
//     return 0;
// }


 
 
//{
// #include <iostream>
// using namespace std;

// int main ()
// {
//     int n =4 ;
//      for ( int i=0; i<n; i++ )
//      {
//         for ( int j=1; j<=i+1; j++)
//         {
//             cout << j << " " ;
//         }
//         cout << endl;
//      }
//      return 0;
// }

// }

//  #include <iostream> 
//  using namespace std;

// int main()
// {
//     int n =5 ;
//     for ( int i=0; i<n; i++)
//     {
//         for( int j=i+1; j>0; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream> 
// using namespace std;

// int main()
// {
//     int n =4 ;
//     for( int i=0; i<n; i++ ) 
//     {
//         for ( int j=1; j<=i+1; j++) 
//         { 
//             cout << i+1 << " ";

//         }
//         cout << endl;
//     }
//     return 0;

// }

 
// REVERSE ANGLE TRIANGLE PATTERN !!
//  #include <iostream>
//  using namespace std;

//  int main () 
//  {
//     int n= 5; // foward loop => 1 to i+1. , backward loop => i+1 to 1 .
//     for( int i=0; i<n; i++) {
//         for ( int j=i+1; j>0; j-- ){

//         cout << j << " " ;
//         }
//         cout << endl;
//     }
//     return 0;
//  }


//   #include <iostream>
//  using namespace std;

//  int main () 
// {
//     int n=5;
//     int num=1;
//     for(int i =1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<< i ;
//             num++;
//         }
//         cout<< endl;
//     }
//     return 0;
// }
 
// inverted triangle pattern . 
// #include <iostream>
//  using namespace std;

// int main (){
//     int n=5;
//     for( int i=1; i<=n; i++){
//         for( int j=1; j<i; j++){
//                 cout << "*" ;
//                 }
//         for(int j=1; j<=n-i; j++){
//                   cout<< i ;
        
//         }
//         cout << endl;
//     }
//       return 0;      
// }


//  piramid pattern.
// #include <iostream>
//  using namespace std;

// int main (){
//     int n=4;
//     for(int i=0; i<n; i++){
//         //spaces => n-i-1
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         // num1 => i+1
//         for(int j=1; j<=i+1; j++){
//             cout<<j ;
//         }
//         //num2 => i+1 to 1.
//         for(int  j=i; j>0; j--){
//             cout << j;
//     }
//         cout << endl;
//     }
//       return 0;      
// }

// #include <iostream>
//  using namespace std;

// int main (){
//     int n=4;
//     for (int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){//for(int j=i+1;j>=0;j--)
//             cout << " * " ;
//         }
    
//         cout << endl;
//     }
//       return 0;      
// }

// flipped inverted pyramid
// #include <iostream>
//  using namespace std;

// int main (){
//     int n=5;
//     for (int i=n; i>0; i--){
//         for(int j=n-1-i; j>=0; j--){
//             cout << " " ;
//         }
//         for(int j=0;j<i;j++){
//             cout<< "*";
//         }
    
//         cout << endl;
//     }
//       return 0;      
// }


#include <iostream>
#define area(x) (3.14*x*x)

using namespace std;

int main(){
   int n;
   cout<< "Enter enter the redius x : \n" ;
   cin>> n ;
   cout << "area : " << 
}
