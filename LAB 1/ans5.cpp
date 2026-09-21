// determinr a given charcater is alphabet, digit or special character.
#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << " enter the character: ";
    cin>>ch;
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        cout<<"the character is alphabet"<<endl;
    else if(ch>='0'&&ch<='9')
        cout<<"the character is digit"<<endl;
    else
        cout<<"the character is special character"<<endl;

}