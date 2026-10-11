// 3 REVERSE OF AN ARRAYN.
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter " << n << " elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     // Reverse using swapping
//     int start = 0;
//     int end = n - 1;

//     while(start < end){
//         // Swap arr[start] and arr[end]
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }

//     cout << "Reversed Array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


 # include <iostream> 
 using namespace std ;
 int reverse ( int arr[], int size){
    int start = 0 ;
    int end = size - 1 ;
    while ( start < end ){
        arr[start],arr[end] = arr[end], arr[start] ;
        start ++;
        end--;
    }
    cout << "Reversed Array: " ;
    for ( int i = 0 ; i < size ; i ++ ){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}
                      
 int main(){ 
    int size = 5 ;
    int arr[size] = {1,2,3,4,5} ;
    reverse ( arr , size ) ;
    cout << "original array"<<endl;
    for ( int i = 0 ; i < size ; i ++ ){
        cout << arr[i] << " " ;
    }
 return 0; 
}









