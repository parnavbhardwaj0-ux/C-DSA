//Q3.Write a program to print the multiplication table of a number entered by the user using a do-while loop.

# include <iostream>
using namespace std;

 int main(){
    int n,i=1;
    cout<<" Enter the number : ";
    cin>> n;
    do{
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
        i++;
    }
    while (i<=10);
    return 0;
    
 }
