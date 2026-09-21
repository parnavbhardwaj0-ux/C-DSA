 
 # include <iostream> 
 using namespace std ;
 int pow(int x,int n){
    if(n==0){ // base condition
        return 1;
    }else{
    return x * pow(x,n-1); // recursive case.
    }
 }
                      
 int main(){ 
    int x,n;
    cout<<"enter base and exponent to find power: ";
    cin>>x>>n;
    cout<<x<<" raised to the power "<<n<<" is "<<pow(x,n)<<endl;
 return 0; 
}