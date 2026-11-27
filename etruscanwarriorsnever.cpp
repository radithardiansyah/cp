#include <iostream>
using namespace std;
#include <vector>

int main(){
    long long howManyTestCase = 0;
    cin >> howManyTestCase;
    vector<long long> warriors(howManyTestCase);
    for(int i = 0; i < howManyTestCase; i++){
        cin >> warriors[i];
    }
    vector<long long>output;

    int row = 1;
    int rowFit = 0;
    int warrior = 0;
    for(int i = 0; i < warriors.size(); i++){
        if(warriors[i] - row != 0){
            row ++;
            rowFit ++;
warrior = warriors[i];
for(int i = 0; i < warrior; i++){
    if(warrior - row != 0 && warrior <! 0){
row++;
rowFit++;
    }else if(warrior = 0){
        output.push_back(rowFit);
row = 1;
rowFit = 0;
    }
}
        }
    }
      for(int i = 0; i < output.size(); i++){
        cout << output[i];
    }

    return 0;
}