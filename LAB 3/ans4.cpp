//Q4.Write a program to calculate the sum of the first n natural numbers using a loop. The valueof n should be entered by the user. 

# include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin>>n;
    int sum=0;
    int i=1;

    while(i<=n){
        sum+=i;
        i++;
    }
    cout << sum;
    return 0;
}