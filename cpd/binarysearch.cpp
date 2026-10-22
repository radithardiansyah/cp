#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int x) {
   int l = 0, r = arr.size() - 1, mid = 0;
   while(l <= r){
    mid = l + (r - l)/2;
    if(arr[mid] == x){
        return mid;
    }else if(arr[mid] < x){
        l = mid + 1;
    }else{
        r = mid - 1;
    }

   }
   return -1;
}

int main() {
    vector<int> arr = { 2, 3, 4, 10, 40 };
    int x = 10;
    int result = binarySearch(arr, x);
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}