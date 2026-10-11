//  # include <iostream> 
//  using namespace std ;
                    
//  int main(){ 
//     // string parnav="faloda";
//     // string* pp = &parnav;
//     // cout << "The value of parnav is: " << *pp << endl;
//     // cout << "The address of parnav is: " << pp << endl;
//     // *pp = "maglour";
//     // cout << "The value of parnav is: " << *pp << endl;

//  return 0; 
// }

// #include <iostream>
// using namespace std;

// class MyClass {         // The class
//   public:               // Access specifier
//     int myMethod(int x );  // Method/function
// };
//     int MyClass::myMethod(int x){
//         return x*x;
//     } 

// int main() {
//    int x;
//    cout << "Enter the num : "<< endl;
//    cin>>x;
//   MyClass myObj;     // Create an object of MyClass
//   cout << myObj.myMethod(x);  // Call the method
//   return 0;
// }

// //========how to store values using constructor in class and use th function or construtor without return type.==================
// #include <iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int marks;

//     // Constructor (NO return type)
//     Student() {
//         name = "Sheela";        // storing value
//         marks = 90;             // storing value
//     }
// };

// int main() {
//     Student s1;   // Object banate hi constructor chalega

//     // PRINT values
//     cout << "Name: " << s1.name << endl;
//     cout << "Marks: " << s1.marks << endl;

//     // USE values (example: percentage calculate)
//     int doubledMarks = s1.marks * 2;
//     cout << "Doubled Marks: " << doubledMarks << endl;

//     return 0;
// }



//  acsending order
//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//     int arr[5]={2,5,1,4,3};
//     for(int i=0;i<5-1;i++){
//         for(int j=i+1;j<=5;j++){
//             if(arr[j]<arr[i]){
//                 // swap
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     cout<<"Sorted array is : ";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//  return 0; 
// } 


//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//     int n = 14; 
//     int sum = 0 ;
//     int product = 1 ;
//     int digit ;
//     while ( n > 0 ){
//         digit = n % 10 ;
//         sum = sum + digit ;
//         product = product * digit ;
//         n = n / 10 ;
//     }

     

//     if ( sum == product){
//         cout << "spy numerr  " << endl ;
//     }
//     else {
//         cout << " not spy Number " << endl ;
//     }
//  return 0; 
// }


//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//     cout << ( 10 << 2) << endl;
//  return 0; 
// }


//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//    int n; 
//    cout<<"Enter the num : "<<endl;
//    cin>>n;
//    while ( n % 2 == 0 ){
//        n = n / 2 ;
//    }  
//    if (n == 1){
//       cout << " power of 2 " << endl ; 
//    }
//    else {
//       cout << " Not power of 2 " << endl ;
//    }
//  return 0; 
// }


//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//    int num;
//    cout<<"Enter the num : "<<endl;     
//    cin>>num;
//    int newnum = 0;
//    while ( num > 0 ){
//        int digit = num % 10 ;
//        newnum = newnum * 10 + digit ;
//        num = num / 10 ;
//    }
//  return 0; 
// }

//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){
//   char array[5]={'a','b','c','d','e'};
//   cout <<sizeof(array[0]) << endl; // anser will be in byts .
//  return 0; 
// }

// SORTING . 
// # include <iostream> 
//  using namespace std ;
                      
// int main(){ 
// int array[] = {23,45,6,7,3,4,77,7,8,9};
//     int size = sizeof(array)/sizeof(int);
//     for(int i=0; i<size-1; i++){
//         for(int j = 0 ; j<size-i-1; j++){
//             if(array[j]>array[j+1]){
//                 // swap
//                 int temp = array[j];
//                 array[j]=array[j+1];
//                 array[j+1]=temp;
//             }   
//         }
//     }
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<" ";
//     }
