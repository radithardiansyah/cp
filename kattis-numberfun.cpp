#include<iostream>
using namespace std;

int main(){
    int case_ajah, a, b, c;
cin >> case_ajah;
for(int i = 0; i < case_ajah; i++){
    cin >> a >> b >> c;
    if(a + b == c){
        cout << "Possible" << "\n";
    }else if(a - b == c){
        cout << "Possible" << "\n";

    }else if(a * b == c){
cout << "Possible" << "\n";
    }else if(b/a == c){
        cout << "Possible" << "\n";
    }else{
        cout << "Impossible" << "\n";
    }
}

    return 0;
}