// Q2.Write a program to print all even numbers between 1 and 50 using a while loop.

# include <iostream>
using namespace std ;

int main(){
     int n=50;
     int i=1;

     while(i<=n){
         if(i%2==0){
            cout<<i<< " ";
             
         }
         i++;
     }
     return 0;
}
