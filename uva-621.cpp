#include<iostream>
using namespace std;
#include <string>
#include<cmath>

int main(){
int c;
string e_r;
cin >> c;
for(int i = 0; i < c; i++){
cin >> e_r;


if(e_r == "1" || e_r == "4" ||e_r == "78"){
    cout << "+" << "\n";
}else if(e_r.size() > 2 && e_r.substr(e_r.size() - 2) == "35"){
cout << "-" << "\n";
}else if(e_r.size() > 2 && e_r[0] == '9' && e_r.size()-1 == '4'){
cout << "*" << "\n";
}else{
    cout << "?" << "\n";
}
}
    return 0;
}