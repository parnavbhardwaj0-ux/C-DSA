// Q1. Write a programme to search maximum element in an array.
// #include <iostream>
// using namespace std;
// int main(){
//     int size;
//     cout << "enter the size of an array :";
//     cin>>size;
//     int aray[size];
//     cout <<"enetr the  elements of array : "<< endl;
//     for( int i=0; i<size; i++){
//         cin>> aray[i];
//     }

// int max = aray[0];
//     for(int i=1; i<size; i++){
//         if(aray[0]<aray[i]){
//          max=aray[i];
//     }
// }
//         cout << "maximum element in the array is : " << max << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;            // 0,1 prime nahi hote
    for (int i = 2; i * i <= n; i++) {   // sqrt(n) tak check
        if (n % i == 0)                  // agar divisible hua
            return false;
    }
    return true;                         // prime hai
}

// Function to print all prime numbers in array
void printPrime(int arr[], int size) {
    cout << "Prime numbers in array: ";
    
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {           // function call
            cout << arr[i] << " ";       // prime value print
        }
    }
}

int main() {
    int arr[] = {10, 3, 5, 12, 17, 19, 21, 29};
    int size = 8;

    printPrime(arr, size);

    return 0;
}
