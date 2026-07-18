#include <iostream>
using namespace std;
#include <cmath>

int main(){
int n, m;
cin >> n >> m;

if(n -m < 0){
    cout << "Dr. Chaz will have" << " " << abs(n - m) << " " << "pieces of chicken left over!";
}else{
    cout << "Dr. Chaz needs"<< " " << n-m << " " << "more pieces of chicken!";
}
    return 0;
}
//g++ kattis-onechicken.cpp -o kattis-onechicken
// ./kattis-onechicken
