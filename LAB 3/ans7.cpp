// //Q7.Write a program to check whether a given integer is a palindrome or not. A palindrome  number remains the same when its digits are reversed.

 # include <iostream> 
 using namespace std ;
                      
 int main(){ 
    int n , rev =0,original;
    cout << "enterr the number :";
    cin>>n;

    original=n;

    while(n>0){
    int digit= n%10;
    rev = rev*10 +digit;
    n = n/10;

    }
   if (original==rev)
   {
    cout<<original<<" is a palindrone." << endl;
   }else
   {
    cout<<original <<" is not a palindrone. \n";
   }
 return 0; 
}