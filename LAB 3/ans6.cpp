//Q6.Write a program to read an integer from the user and reverse its digits. The program should output the reversed number.
  # include <iostream> 
  using namespace std ;
                       
  int main(){ 
    int n,rev=0;
    cout<<"enter the integer :";
    cin>>n;
    while(n>0){
        int digit= n%10;
        rev = rev*10 + digit;
        n=n/10;
    }
    cout<< "reverse of number is "<< rev ;
  return 0; 
 }