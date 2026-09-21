//conversion of deci,al number into binary system.

//  # include <iostream> 
//  using namespace std ;
 
// int binary(int n){//n = decimal number .
//     int ans = 0, pow = 1;
//     while(n>0){
//         int remender = n%2;
//         ans+= remender*pow;
//         n = n/2;
//         pow = pow * 10;
//     }
//     return ans;
// }
                      
//  int main(){ 
//     int n =16;
//    // for(int i= 1 ; i<=10 ; i++){
//     cout << n << "=" << binary(n) << endl;

//  return 0; 
//}
//==========================conevert binary into decimal.========================================================
//  # include <iostream> 
//  using namespace std ;
//  int decimal(int n){        // n = binary number.
//     int ans = 0, pow = 1;
//     while(n>0){
//     int remender = n%10;
//     ans += remender*pow;
//     n = n/10;
//     pow = pow*2;
//     }
//      return ans;
//  }        
//  int main(){
//     int n;
//     cout <<"Binary into decimal ,enter number  : ";
//     cin>>n;
//     cout << n << " = " << decimal(n);

//  return 0; 
// }