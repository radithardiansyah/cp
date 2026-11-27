#include <iostream>
using namespace std;
#include <cmath>
#include <vector>

int main(){
long long hashmat_army, opponent_army;
vector<int>answer;
while(cin >> hashmat_army >> opponent_army){
    //cout << abs(hashmat_army - opponent_army) << "\n";
   answer.push_back(abs(hashmat_army - opponent_army));
}
for(int size_t = 0; i < answer.size(); i++){
    cout << answer[i] << "\n";
}
//for(int a : answer){
// cout << a << "\n"}
    return 0;
}
//g++ uva-10055.cpp -o uva-10055
// ./uva-10055
