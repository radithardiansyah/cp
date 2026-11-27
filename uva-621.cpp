#include<iostream>
using namespace std;
#include <string>
#include<cmath>
//ITS HARD BUT I DEFO BEAT IT TO THE ASS
int main(){
int n;
cin >> n;
string n_lines;
for(int i = 0; i < n; i++){
cin >> n_lines;
if(n_lines == "1" || n_lines == "4" || n_lines == "78"){
    cout << "+" << "\n";
}else if(n_lines.size() > 2 && n_lines.substr(n_lines.size() - 2) == "35"){
cout << "-" << "\n";
}else if(n_lines.size()  > 2 && n_lines[0] == '9' && n_lines[n_lines.size() - 1] == 4){
    cout << "*" << "\n";
}else{
    cout << "?" << "\n";
}
}
    return 0;
}
//string
//it can accessed by index
//the index can be manipulated such as b = a.size()-5 if a is 10 than b is 5
//can be combine with the point to start substr

//string bisa diakses dengan indeks
//substring adalah fungsi yg berjalan otomatis menggunakan index. no yg ada pada kurung adalah index


