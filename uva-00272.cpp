#include<iostream>
using namespace std;
#include<string>

int main(){
    string text;
    bool first = true;

    while(getline(cin, text)){
        for(char t : text){
            if(t == '"'){
if(first){
    cout << '``';
    first = false;
}else{
    cout << "''";
    first = true;
}
            }else{
                cout << t;
            }
            cout << "\n";
        }
    }

    /*
    while(getline(cin, text)){
for(char t : text){
    if(t == '"'){
if(first){
    cout << "``";
    first = false;
}else{
    cout << "''";
    first = true;
}
    }else{
        cout << t;
    }
    cout << '\n';
}
    }
*/

    return 0;
}