 // write a recursive programme  for fibonacci series
 # include <iostream> 
 using namespace std ;
 int fibonacci(int n){
    if(n==0){ // base condition
        return 0;
    }else if(n==1){
        return 1;
    }else{
    return fibonacci(n-1)+fibonacci(n-2); // recursive case.
    }
 }                    
 int main(){ 
    int n;
    cout<<"enter a number to find fibonacci series upto n terms: ";
    cin>>n;
    cout<<"fibonacci series upto "<<n<<" terms is: ";
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
 return 0; 
}