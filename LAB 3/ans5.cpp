//Q5.Write a program to calculate the factorial of a given number using a loop. Factorial of anumber n is defined as:n!=n×(n−1)×(n−2)×...×1n! = n × (n-1) × (n-2) × ... × 1n!=n×(n−1)×(n−2)×...×1.

# include <iostream>
using namespace std;
 int main(){
    int n, fact =1;
    cout << "Enter the numberm:";
    cin>>n;
    for(int i=n;i>0;i--){
        fact = fact*i;
    }
    cout<<"Factorial = "<< fact <<endl;

 }

