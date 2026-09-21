// write a programme to seacrh an element in an array using linear search.
//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//     int n , key;
//     bool flag=false;
//     cout << "enter the size of array "; 
//     cin >> n;
//     int a[n];
//     cout << "enter the element ";
//     for(int i=0;i<n;i++)
//     cin>>a[i];
//     cout << "enter the element to be searched ";
//     cin >> key;
//     for(int i=0;i<n;i++){
//         if(a[i]==key){
//             flag=true;
//             break;
//         }
//     }
//     if(flag==true)
//         cout << "element found";
//     else
//         cout << "element not found";
//  return 0;
// }
//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//     int size=5;
//   int array[size] = {10, 20, 30, 40, 50}; 
//   bool key = 3;
//   for (int i=0; i<size ;i++){
//     if ( array[i]==key){
//         break;
//     }
//   }  
//   if ( key == 3){
//     cout << "element found" << endl;
//   }
//   else{
//     cout << "element not found" << endl;
//   }
//  return 0; 
// }

//  # include <iostream> 
//  using namespace std;
                      
//  int main(){
//   int n = 5;
//    int array[n] = {10, 20, 30, 40, 50};
//    bool key ;
//    cout << "Enter the element to be searched : ";
//    cin >> key;

//    for (int i=0; i<n ;i++){
//      if ( array[i]==key){
//           key = true;
//           break;
//       }else{
//           key = false;
//       }
    
//     }
//     if(key){
//         cout << "element found" << endl;
//       }
//       else{
//         cout << "element not found" << endl;
//       }
//     return 0;
//   }

 # include <iostream> 
 using namespace std ;
 bool binarysearch(int array[], int size , int key ){
    for ( int i =0 ; i < size ; i ++ ){
        if ( array[i] == key ){
            return true ;
        }
    }
    return false;
 }
                      
 int main(){ 
  int array[5] = {10, 20, 30, 40, 50};
  int size = 5 ;
  int key ;
  cout << "Enter the element to be searched : " ;   
  cin >> key;
  if (binarysearch(array, size, key)){
    cout << "Element found" << endl;
  }
  else{
    cout << "Element not found" << endl;
  }
 return 0; 
}















