// format of recursion 
//  # include <iostream> 
//  using namespace std ;
//      return_type function_name(parameter_list) {
//     // base case
//     if (base_condition) {
//         return base_value;
//     }
//     // recursive case
//     return function_name(modified_parameter_list);
// }                 
//  int main(){ 
//  return 0; 
// }
//=================================================================================================================================

 # include <iostream> 
 using namespace std ;
 int fact(int n){
    if(n==0||n==1){ // base condition
        return 1;
    }else{
    return n*fact(n-1);
    }
 }          
 int main(){ 
    int n;
    cout<<"enter a number to find factorial: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<fact(n)<<endl;
 return 0; 
}