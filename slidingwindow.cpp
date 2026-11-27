#include <iostream>
#include <climits>
using namespace std;

int maxSumSubarray(int arr[], int n, int k) {
    // If array size is less than window size
    if (n < k) {
        cout << "Invalid input: Array size is smaller than window size." << endl;
        return -1;
    }
    //n = 6
    // k = 3

    int max_sum = INT_MIN;
    int window_sum = 0;

    // Find the sum of the first 'k' elements
    for (int i = 0; i < k; i++) {
        //i is gonna run 3 times
        window_sum += arr[i];
        //215
    }
   
    // Ensure the first window is the baseline for comparison.
    int max_sum = window_sum;//8

    // Now slide the window across the array
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];  // Slide the window
        //window_sum = 3
        max_sum = max(max_sum, window_sum);  // Update the maximum sum
    }

    return max_sum;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum sum of subarray of size " << k << " is " << maxSumSubarray(arr, n, k) << endl;
    return 0;
    //how the loop works, do they count from 0 or just jump
    //if they count from zero it makes sense why the sliding works? no
    //it should be jump righttt??
}