// // //Write a program to count the total number of digits in a given integer using a loop.
// // Example:
// // Input: 98765
// // Output: Number of digits = 5
//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//     int n;
//     cout << " enter the number : \n";
//     cin>>n;

//     int count = 0;

//     while(n>0){
//         int digit = n%10;
//         count++;
        
//     }
//     cout << "Number if digits : "<< count <<endl;
//  return 0; 
// }
//===========================USING FOR LOOP ======================================
 #include <iostream>
using namespace std;

int main() {
    int n = 56789;
    int count = 0;

    // Using for loop
    for (; n > 0; n = n / 10) {
        count++;   // increase count for each digit
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}
