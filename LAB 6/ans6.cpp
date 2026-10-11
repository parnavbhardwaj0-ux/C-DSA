//  Write a programme to create functions to check if a number is perfect.

//  # include <iostream> 
//  using namespace std ;
//     bool perfect(int n){
//         int sum=0;
//         for(int i=1; i<n; i++){
//             if(n%i==0){
//                 sum+=i;
//             }
//         }
//         if(sum==n){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }   
                      
//  int main(){ 
//     int n ;
//     cout << "enter the number ";
//     cin>>n;
//     if(perfect(n)){
//         cout << n << " is a perfect number "<< endl;
//     }
//     else{
//         cout << n << " is not a perfect number "<< endl;
//     }
//  return 0; 
// }


 # include <iostream> 
 using namespace std ;
 int sum ( int n ){ 
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
 }
 bool perfect(int n){
    if(sum(n)==n){
        return true;
    }                   
    else{
        return false;
    }
}
                      
 int main(){ 
    int n ;
    cout << "enter the number ";
    cin>>n;
    if(perfect(n)){
        cout << n << " is a perfect number "<< endl;
    }
    else{
        cout << n << " is not a perfect number "<< endl;
    }

 return 0; 
}