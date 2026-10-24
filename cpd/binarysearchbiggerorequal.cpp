#include<iostream>
using namespace std;
#include<vector>

int binarysearch(vector<int> &arr, int x){

    return 0;
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