// GCD number  .
// # include <iostream>
// using namespace std;
 
// int gcd(int a, int b){
//     while(b !=0){
//         int remainder= a%b;
//         a=b;
//         b =remainder;
//     }
//     return a;
// }
// int main(){
//     int a, b;

//     cout<< " Enetr the  the a and b:  ";
//     cin>>a>>b;
    
//     cout << "The gcd of " << a<< " and " << b <<" is " << gcd(a,b)<< endl;
//     return 0;
// }

// declarion a function is to inform the compiler about the existence of a specific function. memory space will nit be allocated during of a existence 
// ARRAY = array is a linear data structure where all element are arranged sequentally. it is a collection of element of same data type stored at contigeous memory location.


 # include <iostream>
using namespace std;
 
int gcd(int a, int b){
    int remainder;
    while(remainder !=0){
        remainder= a%b;
        a=b;
        b =remainder;
    }
    return a;
}
int main(){
    int a, b;

    cout<< " Enetr the  the a and b:  ";
    cin>>a>>b;
    
    cout << "The gcd of " << a<< " and " << b <<" is " << gcd(a,b)<< endl;
    return 0;
}