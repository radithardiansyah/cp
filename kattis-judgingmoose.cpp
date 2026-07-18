// g++ kattis-judgingmoose.cpp -o kattis-judgingmoose
// ./kattis-judgingmoose

#include <iostream>
using namespace std;
#include <algorithm>

int main(){
int l, r;
cin >> l >> r;
int sum_lr = l + r;
if(l == 0 && r == 0){
    cout << "Not a moose";
}else if(sum_lr % 2 == 0){
    cout << "Even" << " " << sum_lr;
}else{

    cout << "Odd" << " " << 2 * max(l, r);
}
    return 0;
}
