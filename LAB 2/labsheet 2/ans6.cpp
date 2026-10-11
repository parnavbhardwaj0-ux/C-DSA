//Q6.Write a C++ program to take a string from the user and count:
// • Number of vowels (a, e, i, o, u in both uppercase and lowercase)
// • Number of consonants (alphabetic characters excluding vowels)
// • Number of spaces
// • Number of special characters (symbols, punctuation, digits)

# include <iostream>
# include <string>
using namespace std;

int main(){
    string str;
    int vowel=0,consonent=0,space=0, special =0;

    cout << " Enter a string .\n";
    getline(cin,str);

    for (int i=0;  i< str.length(); i++){
        char ch =str[i];

        if(ch=='a'||ch =='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ){
        vowel++;
        }
        else if ('a'&&'z'||'A'&&'Z'){
            consonent++;
    }
     else if(ch ==  ' '){
        space ++;
     }
     else;
     special ++;
  }
  cout << "\nNumber of vowels: " << vowel;
  cout << "\nNumber of consonants: " << consonent;
    cout << "\nNumber of spaces: " << space;
     cout << "\nNumber of special characters: " << special;

     return 0;
}