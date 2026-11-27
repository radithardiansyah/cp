#include<iostream>
using namespace std;
#include<vector>

int binarysearch(vector<int> &arr, int x){
int ans = -1, l = 0, r = arr.size()-1, mid = 0;

while(l <= r){
mid = l + (r - l)/2;
if(arr[mid] >= x){
    ans = mid;
    r = mid + 1;
}else{
    l = mid - 1;
}
}
    return ans;
}

int main(){
    int banyak_array, x, result;
    cin >> banyak_array;
vector<int>arr(banyak_array);

for(int i = 0; i < banyak_array; i++){
    cin >> arr[i];
}
cin >> x;
result = binarysearch(arr, x);
cout << result;

    return 0;
}