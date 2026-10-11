// palindrome number.

 # include <iostream> 
 using namespace std ;
                      
 int main(){ 
    int n ;
     cout << " enter the number :";
     cin>>n;
     int rev=0;

     int original =n ;

     while(n>0){
     int digit = n%10;
     rev = rev*10+digit;
     n/=10;

     }
     if(rev == original)
     cout << original << " is a palindrone /n";
     else
     cout <<  original << " is not a palindrone /n";

 return 0; 
}