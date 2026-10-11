//given character vowel or consonant.
#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << " enter the character: ";
    cin>>ch;
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
        cout<<"the character is vowel"<<endl;
    else
        cout<<"the character is consonant"<<endl;

}