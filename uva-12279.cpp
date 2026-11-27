#include<iostream>
using namespace std;
#include<vector>
#include<cmath>

int main(){
    int b_e_b, n_0, n_e;
    while(cin >> b_e_b){
        if(b_e_b == 0){
            break;
        }
        vector<int>s(b_e_b);
        n_0 = 0;
        n_e = 0;
        for(int i = 0; i < b_e_b; i++){
cin >> s[i];
        }
        for(int j = 0; j < s.size(); j++){
            if(s[j] == 0){
n_0++;
            }else{
                n_e++;
            }
        }
        cout << abs(n_0 - n_e) << "\n";
    }


    return 0;
}