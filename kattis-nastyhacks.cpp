#include<iostream>
using namespace std;

int main(){
int case_ajah, r, e , c;
cin >> case_ajah;
for(int i = 0; i < case_ajah; i++){
    cin >> r >> e >> c;
    if(e - c > r){
        cout << "advertise" << "\n";
    }else if(e - c < r){
cout << "does not matter" << "\n";
    }else{
        cout << "do not advertise" << "\n";
    }
}
    return 0;
}