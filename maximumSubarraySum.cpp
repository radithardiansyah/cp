#include <iostream>
using namespace std;
#include <vector>

//maximusSubarraySumNaive

int main(){
    int banyakArray;
    cin >> banyakArray;
      vector<int>inputArray(banyakArray);
    for(int i = 0; i < banyakArray; i++){
        cin >> inputArray[i];
    }
    int totalSum = inputArray[0];
    
    for(int i = 0; i < inputArray.size(); i++){
         int sumSementara = 0;
for(int j = i + 1; j < inputArray.size(); j++){
sumSementara += inputArray[j];
if(sumSementara > totalSum){
    totalSum = sumSementara;
}
}
    }


    return 0;
}