#include<iostream>
using namespace std;
#include<vector>

int main(){
int t, b_c, min_run, no;
cin >> t;
no = 0;
for(int i = 0; i < t; i++){
    no ++;
cin >> b_c;
vector<int>s(b_c);
for(int j = 0; j < b_c; j++){
    cin >> s[j];
}
min_run = s[0];
for(int k = 0; k < s.size(); k++){
if(min_run < s[k] ){
    min_run = s[k];
}
}
cout <<"Case" << " "<< no<<":"<<" "<<min_run << "\n";

}
    return 0;
}