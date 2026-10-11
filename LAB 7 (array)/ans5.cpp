// binary search in c++
//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//     int n , key, mid, start, end;
//     bool flag=false;
//     cout << "enter the size of array "; 
//     cin >> n;
//     int a[n];
//     cout << "enter the element in sorted order ";
//     for(int i=0;i<n;i++)
//     cin>>a[i];
//     cout << "enter the element to be searched ";
//     cin >> key;
//     start = 0;
//     end  = n-1;
//     while(start<=end){
//         mid = (start + end)/2;
//         if(a[mid]==key){
//             flag=true;
//             break;
//         }
//         else if(a[mid]<key){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     if(flag==true)
//         cout << "element found";
//     else
//         cout << "element not found";

//  return 0; 
//  }

//   # include <iostream> 
//   using namespace std ;
                       
//   int main(){ 
//     int n = 6, key , mid , start , end ;
//     bool flag=false;
//     int a[n]={12, 14, 21, 27, 35, 40};
//     key =  27;  
//     start = 0;
//     end = n-1;
//     while(start<=end){
//         mid = (start + end )/2;
//         if (a[mid]==key){
//             flag=true;
//             break;
//         } 
//         else if (a[mid]<key){
//             start = mid + 1;
//         }

//         else{
//             end = mid - 1;
//         }
//     }
//     if (flag==true)
//         cout << "element found" << endl;
//     else
//         cout << "element not found" << endl;
//   return 0; 
//  }

//  # include <iostream> 
//  using namespace std ;
//  bool binarySearch(int arr[], int size, int key){
//     int start = 0 ;
//     int end = size - 1 ;
//     while ( start <= end ){
//         int mid = ( start + end ) / 2 ;
//         if ( arr[mid] == key ){
//             return true ;
//         }
//         else if ( arr[mid] < key ){
//             start = mid + 1 ;
//         }
//         else {
//             end = mid - 1 ;
//         }
//     }
//     return false ;
// }                    
//  int main(){ 
//     int size = 6 ;
//     int arr[size] = {12, 14, 21, 27, 35, 40};
//     int key ;
//     cout << "Enter the element to be searched : ";
//     cin >> key ;
//     if ( binarySearch(arr, size, key) ){
//         cout << "Element found" << endl;
//     }
//     else{
//         cout << "Element not found" << endl;
//     }
//  return 0; 
// }

 # include <iostream> 
 using namespace std ;
 bool binarySearch(int arr[], int size , int key , int start , int end ){
    if ( start > end ){
        return false ;
    }
    int mid = ( start + end ) / 2 ;
    if ( arr[mid] == key ){
        return true ;
    }
    else if ( arr[mid] < key ){
        return binarySearch ( arr , size , key , mid + 1 , end ) ;
    }
    else {
        return binarySearch ( arr , size , key , start , mid - 1 ) ;
    }
    
 }                      
 int main(){ 
    int size = 5;
    int original_arr[size] = {12, 14, 21, 27, 35};
     for ( int i = 0 ; i < size ; i ++ )
    cout << original_arr[i] << " " ;
    cout << endl ;
    int key ;
    cout << "Enter the element to be searched : ";
    cin >> key ;
    if ( binarySearch ( original_arr , size , key , 0 , size - 1 ) ){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
 return 0; 
}