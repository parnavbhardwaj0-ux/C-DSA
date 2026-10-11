// binary search by recursion

 # include <iostream> 
 using namespace std ;
    int binarySearch(int arr[], int left, int right, int target){
        if(right >= left){
            int mid = left + (right - left) / 2; // find the middle index
    
            // base condition
            if(arr[mid] == target){
                return mid; // target found at index mid
            }
            // recursive case
            if(arr[mid] > target){
                return binarySearch(arr, left, mid - 1, target); // search in the left half
            }else{
                return binarySearch(arr, mid + 1, right, target); // search in the right half
            }
        }
        return -1; // target not found
    }
                      
 int main(){
    int n, target;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter target element to search: ";
    cin >> target;
    int result = binarySearch(arr, 0, n - 1, target);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }else{
        cout << "Element not found in the array." << endl;
    }
 return 0; 
}
    