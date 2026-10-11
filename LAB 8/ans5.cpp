// euclidean algorithm to find gcd of two numbers
# include <iostream> 
 using namespace std ;
 
 int gcd(int a, int b){
    if(b==0){ // base condition
        return a;
    }else{
        return gcd(b, a % b); // recursive case.
    }
 }
                      
 int main(){ 
    int a,b;
    cout<<"enter two numbers to find gcd: ";
    cin>>a>>b;
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
 return 0; 
}