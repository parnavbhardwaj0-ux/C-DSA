// sum of n  nutambers using recursion
 # include <iostream> 
 using namespace std ;
 int sum(int n){
    if(n==0){ // base condition
        return 0;
    }else{
    return n + sum(n-1); // recursive case.
    }
 }                    
 int main(){ 
    int n;
    cout<<"enter a number to find sum of n natural numbers: ";
    cin>>n;
    cout<<"sum of "<<n<<" natural numbers is "<<sum(n)<<endl;
 return 0; 
} 

//=================================================================================================================================