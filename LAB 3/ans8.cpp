// //Q8.Write a program to calculate the sum of digits of a given integer using a while loop.
// Example:
// Input: 543
// Output: Sum = 12

 # include <iostream> 
 using namespace std ;
                      
 int main(){ 
    int n, sum=0;
    cout <<"enter the integer:";
    cin>>n;

    while(n>0){
    int digit= n%10;
    sum =sum + digit;
    n = n/10;

    }
    cout<< sum <<endl;
 return 0; 
}