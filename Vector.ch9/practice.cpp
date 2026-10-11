// FUNCTIONS AND LOOP WITH VECTOR


 # include <iostream>
 # include <vector> // for vector STANDARD LIBRARY
 using namespace std ;
                      
 int main(){ 
    vector <int> v; // declaration of vector.
    cout << " before  Size = " <<  v.size() << endl; // it will print the size of vector.
     v.push_back(10); // it will add the element at the end of vector.
     v.push_back(20);
     v.push_back(30);
     v.pop_back(); // it will remove the last element of vector.
    cout << " after the push back Size = " <<  v.size() << endl; // it will print the size of vector.
    cout << " elements in vector : ";
    for ( int val:v ){
        cout << val << " " ;  // it will print all the elements of vector.
    }
    cout << endl;
    cout << " Last element: " << v.back() << endl; // it will print the last element of vector.
    cout << "First element: " << v.front() << endl; // it will print the first element of vector.
    cout << " Element at index 0 : " << v.at(0) << endl; // it will print the element at index 0.
 return 0; 
}
