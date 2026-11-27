#include<iostream>
#include<string>
using namespace std;

int main(){
int n;
string n_lines, left, right;
int op;
cin >> n;
for(int i = 0; i < n; i++){
    cin >> n_lines;
    if(n_lines == "P=NP"){
        cout<<"skipped" << "\n";
    }else{
         op = n_lines.find("+");
         left = n_lines.substr(0, op);
         right = n_lines.substr(op + 1);
         cout << stoi(left) + stoi(right);

    }
  
//find = find
//substr = mengambil bagian string ada dua versi (start, end) atau (start)
//stoi ubah string ke angka
}
    return 0;
}