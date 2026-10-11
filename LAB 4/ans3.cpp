//A Neon number is a positive integer where the sum of the digits of its square is equal to the number itself. Example: 92=819^2= 8192=81 → 8+1=98 + 1 = 98+1=9 → Neon number 122=14412^2 = 144122=144 → 1+4+4=91 + 4 + 4 = 91+4+4=9 ≠ 12 → Not a Neon number.
 # include <iostream> 
 using namespace std ;
                      
 int main(){ 
    int n ;
    cout << "Enter the number : ";
     cin>>n;

     int square = n*n;
     int sum =0;

     while(square>0){
        
        int digit = square%10;
        sum +=digit ;
         square/= 10;
         
        }
        if(sum == n){
            cout << n << " is a neon number :";
            
        }else{
            cout << n << " is not a neon number :";
    }
 return 0; 
}