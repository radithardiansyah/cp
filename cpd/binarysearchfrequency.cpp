#include <iostream>
#include <vector>

using namespace std;

// Find the first occurrence


// Find the last occurrence
int findLast(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    int last_pos = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            last_pos = mid;
            left = mid + 1; // Keep searching to the right
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return last_pos;
}

/*
int findFirst(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    int first_pos = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            first_pos = mid;
            right = mid - 1; // Keep searching to the left
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return first_pos;
}
*/

int findFirst(vector<int>arr, int target){
int left = 0;
int right = arr.size() - 1;
int first_post = -1;

while(left <= right){
    int mid = left + (right - left)/2;
    if(arr[mid] == target){
        first_post = mid;
        right = mid -1;

    }else if()
}

}


int countFrequencyManual(const vector<int>& arr, int target){
int first = findFirst(arr, target);
if(first == -1) return 0;
int last = findLast(arr, target);

return(last - first) + 1;//why +1

    }


int main(){
    vector<int>arr = {1,2,2,2,2,3,4,7,8,8};
    int target = 2;
    cout << "frequency of " << target << " is " << countFrequencyManual(arr, target) << "\n";
}