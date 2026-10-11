// #include <iostream>
// using namespace std;
// //funtion defination.
// int printhello(){
//     cout<<"hello world \n";
//     return 2;
// }
// // function call.
// int main()
// {
//     // int val= printhello();
//     // cout<< " value= "<< val;
//     // OR.
//     cout << printhello()<< endl;
//     return 0;
// }

//================================================================================
// //sum of two numbers.
// #include <iostream>
// using namespace std;
// // int sum(int a , int b){
// //     int s = a+b ;
// //     return s;
// // }
// //MIN OF TWO INTEGER .
// int num(int a,int b){ //parameter
//   if (a>b){
//   return a;
// } else {
//   return b;
// }
// }
// int main()
// {
//   //   int val = sum(3,5);
//   //   cout<< "value= " << val << endl;
//   // // cout<<"sum= "<<sum(5,6); // calling dunction andd passing value 
//   //   return 0;
//     cout << num(3,4); //argument 
//     // @ here 3 and 4 is literals means jinki value change nahi hoti h .
//     return 0;

// }
//=====================================================================================

// the sum of from 1 to n number.and factorial 

// #include <iostream>
// using namespace std;
// int  fact(int n)  // using void becouse we dont have to  return anything.
// {
//   int fact = 1 ;

//   for (int i = n; i > 0 ; i--)
//   {
//     fact = i*fact ;
//   }
//   return fact ;


// }
//   int main() /// caling funaction to call the function and pass the argumnet .
//   {
//     cout << fact(6) <<endl;
//     cout<< fact(12);
//     return 0;
//   }

  //==================================================================================
// # include <iostream> 
// using namespace std;

// int sum( int n){
//  int sum=0;
//  for (int i= 0; i<= n; i++){
//   sum += i;
//  }
//  return sum;
// }
// int main()
// {
//   cout << sum(4)<< endl;
//   cout << sum(6) << endl;
// }
//==================== FUNCTION In MEMORY======================================================
// # include <iostream> 
// using namespace std;
// int sum(int a, int b){
//   return (a+b);
// }
// int main(){
//   cout << sum(3,5);
//   return 0; 
// }

// # include <iostream> 
// using namespace std;
// void fun() {   //it will no exist afterr going on main funtion.
//   int x = 24;
//   cout << "x = " << x <<endl;
// }
// int main (){
//   fun();
//   cout << x << endl;
// }


// # include <iostream> 
// using namespace std;
// void fun(){
//   if(condn){

//   }
//     else if (condn){
//       return;              // go to main function .
                              //return ko hum bina ksis value ko return kiye bagair bhi usee kar akte h!!
//     }
//     else (condn){

//     }
//   }
// int main(){ 
//     fun();
//      0;
// }

//==========================PASSS BY VALUE ===========================================
// copy of argument is passed to function.

//  # include <iostream> 
// using namespace std;
//  int sum(int a, int b){
//    a = a +10; //13
//    b = b +10; // 15
//   int sum = a+b; //28
//   return sum;
//  }
//  int main(){
//   int a=3, b=5;
//   cout << sum(a,b)<<endl;
//   cout << a << " "<<  b <<endl;
//   return 0;
//  }
 
// # include <iostream> 
//  using namespace std;
//  int fun(int x){
//   x = 2*x;
//   cout<<" x = "<< x << endl;
//   return x;
//  }
//  int main (){
//   int x = 5;
//   fun(x);
//   cout <<" x = "<< x << endl;
//  }

// sum of digit in a number .
// # include <iostream> 
//  using namespace std;
//  int digit_sum(int x){
//   int sum = 0;
//   while(x>0){
//   int digit = x %10;
//   sum = sum + digit;
//   x=x/10;
//   }
//     return sum;
//  }
//  int main(){
//   int  val = digit_sum(123);
//   cout << " sum of digit are= "<< val;
//   return 0;
//  }

// calculate the ncr binomial coffiecent for n and r .
// #include <iostream>
// using namespace std;
// int  fact(int n)  
// {
//   int fact = 1 ;

//   for (int i =n; i>0; i--)
//   {
//     fact = i*fact ;
    
//   }
//   return fact ;
// }
// int nCr(int n , int r){
//   int factorial_n= fact(n); //variable.
//   int factorial_r= fact(r); // variable.
//   int factorial_nmr=fact(n-r); // variable.

//   factorial_n/(factorial_r - factorial_nmr);
// }
// int main(){ 
//   cout<< nCr(8,7);
//   return 0;
// }
//=====================================================================================

