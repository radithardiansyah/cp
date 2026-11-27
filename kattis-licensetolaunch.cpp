#include<iostream>
using namespace std;
#include<vector>

int main(){
    int days, f_d, c_j;
    cin >> days;
    vector<int>junk(days);
    for(int i = 0; i < days; i++){
cin >> junk[i];
    }
    f_d = junk[0];
    c_j = 0;
    for(int k = 0; k < junk.size(); k++){
        if(f_d < junk[k] ){
f_d = junk[k];

    }else{
        c_j++;
    }

    }
    cout << c_j << "\n";
    


    return 0;
}