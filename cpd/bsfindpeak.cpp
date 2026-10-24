#include<iostream>
using namespace std;
#include<vector>

int binarysearch(vector<int> &arr){
int l = 0, r = arr.size()-1, mid = 0, ans;
if(l <= r){
    mid = l + (r - l)/2;
    if(mid = 0 && arr[mid] > arr[mid] - 1){
        ans = mid;
        r = mid + 1;
    }else{
        l = mid - 1;
    }
}
    return ans;
}

int main(){
    int arr_s, result;
    cin >> arr_s;
    vector<int>arr(arr_s);

    for(int i = 0; i < arr_s; i++){
        cin >> arr[i];
    }
result = binarysearch(arr);
cout << result;
}