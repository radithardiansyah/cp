#include<iostream>
using namespace std;
#include<vector>

int main(){
int test_case, n_w, h_n, high_wall, low_wall, high_count, low_count;
cin >> test_case;
for(int i = 0; i < test_case; i++){

    cin >> n_w;
    vector<int>s(n_w);
for(int j = 0; j < n_w; j++){
    cin >> s[j];
}
high_wall = s[0];
low_wall = s[0];
high_count = 0;
low_count = 0;
for(int k = 1; k < s.size(); k++){
    if(high_wall < s[k]){
        high_wall = s[k];
high_count++;
    }else if(high_wall > s[k]){
        high_wall = s[k];
        low_count++;
    }
}
cout << high_count << low_count;
}

    return 0;
}