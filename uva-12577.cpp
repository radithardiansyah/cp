#include<iostream>
using namespace std;
#include<string>

int main(){
string input;
int count = 0;
while(cin >> input){
    if(input == "*"){
        break;
    }
    count ++;
    if(input == "Hajj"){
        cout << "Case" << " "<< count <<":"<< " "<< "Hajj-e-Akbar " << "\n";
    }else{
cout << "Case" << " "<< count <<":"<< " "<< "Hajj-e-Asghar " << "\n";
    }
}
    return 0;
}