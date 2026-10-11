// array practise .

//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){
//     int a[5]= {1,2,3,4,5}; // data should be homogeneous , hetrogeneous -> {1,h,6,&}
//     cout << " display the element of array"<<endl;
//     for(int i=0;i<5;i++)
//     cout<<&(a[i]) << " " << endl;  // & for adress of array ! called contineuous memory location.
//  return 0; 
// }

//======================================================================================================

// initiallization and declaration should be in one line .

//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){
//     int a[5]; // declare .
//     int a[5]= {1,2,3,4,5}; // initilization .
//     int s = sizeof(a)/sizeof(a[0]); // total size divide by one  element size .
//     cout << "size is "<< s<<endl;
//     cout << " display the element of array"<<endl;
//     for(int i=0;i<5;i++)
//     cout<<&(a[i]) << " " << endl;  
//  return 0; 
// }

//======================================================================================================
//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//    int s, sum=0 , prod = 1;
//    cout << "enter the size of array ";
//    cin>>s;
//    int a[s];

//    cout << "enter the element ";
//    for(int i=0;i<s;i++)
//    cin>>a[i];

//    cout<<"Display the element of array"<< endl;
//    for(int i=0;i<s;i++){
//    sum+=a[i];
//    prod*=a[i];
//    cout << a[i]<<endl;
//    }
//    cout << "total : " << sum << "  "<< " Product : "<< prod << endl;

//  return 0; 
// }

//===============================REVERSE OF ARRAY====================================================================

# include <iostream> 
 using namespace std ;
                      
 int main(){ 
   int s ,i , j;
   cout << "enter the size of array ";
   cin>>s;
   int a[s] , b[s];

   cout << "enter the element ";
   for(int i=0;i<s;i++)
   cin>>a[i];

   for( i=(s-1), j=0 ; i>=0; i-- , j++)
   b[j] = a[i];

   cout<<"Display the element of array"<< endl;
   for(int i=0;i<s;i++)
   cout << b[i]<<endl;

 return 0; 
}
 
//counting array 
//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){ 
//     int even=0,odd=0;
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     cout << "Display ";
//     for(int i=0;i<10;i++){
//         cout<<a[i]<<" "<< endl;
//         if(a[i]%2==0){
//             even++;
//         }else
//             odd++;

//     }
//     cout<<"even element"<<" " << even<< "  Odd element "<< odd ;

//  return 0; 
// }

// arrange in acceding order .
//  # include <iostream> 
//  using namespace std ;
                      
//  int main(){
//     int index=0;
//     int a[] = {3,4,0,78,9,0,11,4,5,8};
//     int n = sizeof(a)/sizeof(a[0]);
//     cout<<"Size " <<n<<endl;
//     for(int i=0; i<n;i++)
//     {
//         if(a[i] != 0){
//             a[index++]=a[i];
//         }
//         while
//     }
//     return 0;
//  }
 