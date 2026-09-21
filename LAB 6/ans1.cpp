// // write a functons chaeck a number is  prime or not using function.

// # include <iostream> 
// using namespace std;

// void check_prime(int n){
//     bool isprime=true;

//     if(n<0){
//         cout <<n<<" is not a prime number !\n";
//         return;
//     }
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime){ 
//         cout<<n<<" is a prime number!\n";
//     }else{
//         cout<<n<<" is not aprime number!\n";
//     }
    
// }
// int main(){
//     int n;
//     cout<< "Enter the number ; ";
//     cin>>n;
//     check_prime(n);
//     return 0;
// }

# include <iostream> 
using namespace std;

bool check_prime(int n){
    if(n<0)
    return false;
    
    for(int i=2;i=n/2;i++){
        if(n%i==0){
            return false;
            
        }else{
        return true;
        }
    }
}
int main(){
    int n;
    cout<<" Enter the number : ";
    cin>>n;

    if(check_prime(n))
    cout<<n<<" is a prime numbr !\n";
    else
    cout<<n<<" is not a prime number! \n";
    return 0;
}
