#include<iostream>
using namespace std;

int main(){
int sweet, sour;


while(cin >> sweet >> sour){
if(sweet == 0 && sour == 0){
    break;
}

    if(sweet + sour == 13){
        cout << "Never speak again."  << "\n";
    }else if(sweet > sour){
    
     cout << "To the convention."  << "\n";
    
}else if(sweet == sour){
    cout << "Undecided."  << "\n";
}else{
      cout << "Left beehind."  << "\n";
}
}
//need to understand the problem
//if else order is matter


    return 0;
}