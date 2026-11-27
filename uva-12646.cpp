#include<iostream>
using namespace std;
#include<vector>
#include<map>

int main(){
int case_ajah, a, b, c, buat_1, buat_0;
cin >> case_ajah;
for(int i = 0; i < case_ajah; i++){
cin >> a >> b >> c;
if(a == 0 && b == 0 && c == 0){
    cout << "*";
}else if(a == 1 && b == 1 && c == 1){
cout << "*";
}
map<string, int>s;
vector<string>nama_1;
vector<string>nama_2;

s["A"] = a;
s["B"] = b;
s["C"] = c;

 buat_0 = 0;
    buat_1 = 0;

for(auto &q : s){

if(q.second == 1){
buat_1++;
nama_1.push_back(q.first);
}else{
    buat_0++;
    nama_2.push_back(q.first);
}
}


if(buat_0 == 1){
cout << nama_2[0]<< "\n";
}else{
    cout << nama_1[0]<< "\n";
}
}
    return 0;
}