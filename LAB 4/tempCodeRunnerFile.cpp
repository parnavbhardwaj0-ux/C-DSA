# include <iostream> 
 using namespace std ;
                      
 int main(){ 
    long int n;
    cout << "Enter the number :";
    cin>> n;

    long int original= n;
    bool isduck = false;

    while (n>0){
        int digit = n%10;
        n/=10;
        if (digit == 0){
            isduck = true ;
            cout << original << " is a duck number ";
            break;
        }else
        cout << original << " is not a duck number ";
    }
        
 return 0; 
}