#include <iostream>
using namespace std;
#include <vector>
#include<string>

string binarysearch(vector<int> &arr, int x){
    int l = 0, r = arr.size() - 1, mid, square = 0;
    while(l <= r){
        mid = l + (r - l)/2;
        square = arr[mid] * arr[mid];
        if(square == x){
            return "it has square root!";
        }else if(square < x){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }

    return "it has no square root!";
}

int main(){
    int arr_s, x;
    string result;
    cin >> arr_s;
    cin >> x;
      vector<int>arr(arr_s);

      for(int i = 0; i < arr_s; i++){
        cin >> arr[i];
      }

result = binarysearch(arr, x);
cout << result;

    return 0;
}