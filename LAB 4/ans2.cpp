//A Duck number is a positive integer that contains at least one digit 0 .Examples: 1203, 707, and 101 are Duck numbers. 12345 (no zero at all) is notDuck numbers.

//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){
//     long int n ;
//     cout << " enter the number :  ";
//     cin>> n;

//     long int original =  n;

//     bool isduck= false;

//     while (n>0 && n%10 == 0){
//         n/=10;
//     }

//     while(n>0){
//         int long digit = n%10;
//         if(digit == 0){
//             isduck = true;
//             break;
//         }
//         n/=10;
//     }
//     if(isduck){
//         cout<< original<< " this number is duck number \n";

//     }else{
//         cout<< original<< " This number is not a duck number /n";
//     }
//  return 0; 
// }


 # include <iostream> 
 using namespace std ;
                      
 int main(){ 
    long int n;
    cout << "Enter the number :";
    cin>> n;

    long int original= n;
    bool isduck = false;

    while (n>0){
        int digit = n%10;
        
        if (digit == 0){

            isduck = true ;
            break;
        }
        n/=10;
    }
    if(isduck)
        cout << original << " is a duck number ";
        else
        cout << original << " is not a duck number ";

 return 0; 
}