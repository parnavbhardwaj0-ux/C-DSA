//  print a hollow square .

# include <iostream>
using namespace std;

int hollow_square(int row){
    for (int i=1; i<=row;i++){
        for(int j=1; j<=row ; j++){
            if (j == 1 || i==row || i==1|| j==row){
                cout<<"* ";            }
            else{
            cout<< "  ";
            }
        }
        cout << endl;
    }
}

int main(){
    hollow_square(4);
}
