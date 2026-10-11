//Q9.Write a program to generate and print the Fibonacci series up to n terms. The number of
// terms (n) should be entered by the user.
// Example:
// Input: n = 7
// Output: 0 1 1 2 3 5 8

 # include <iostream> 
 using namespace std ;
                      
 int main(){ 
    int n, a=0, b=1 , next;
    cout <<"Enter the number :";
    cin>>n;
    int i=1;

   cout << "fibocconic series: "<< a <<" "<< b <<"  \n";
    while(i<=n-2){
      next =a+b;
      cout << next << " ";
      a = b;
      b = next;
      i++;
    }
    cout << endl;
 return 0; 
}