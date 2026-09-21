// hollow rectangle .

# include <iostream>
using namespace std;
 int hollow_triangle(int l , int b){
    for(int i= 1; i<= l; i++){
        for(int j=1; j<=b ; j++){
            if (j==1||i==1||j==b||i==l){
                cout << "* ";
            }
            else{
            cout << "  ";
            }
        }
        cout << endl;
    }
 }
 int main(){
    int l , b ;
    cout << "Enter the numberr of lenght and breadth : ";
    cin>> l >> b ;  
    hollow_triangle(l , b);
    return 0;

 }