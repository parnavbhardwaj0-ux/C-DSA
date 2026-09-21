// Q2. Write a programme to find sum of all elements in an array.
#include <iostream>
using namespace std;

int main(){
    int size = 5, sum = 0;
    int array[size] = {10, 20, 30, 40, 50};
    for(int i =0 ; i<5 ; i++){
        sum += array[i];

    }
    cout << "sum of all elements in the array is : " << sum << endl;
    return 0;
}