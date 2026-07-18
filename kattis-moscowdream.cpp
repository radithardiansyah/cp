#include<iostream>
using namespace std;

int main(){
int a, b, c, n;
cin >>a >> b >> c >> n;

if(a + b + c >= n && a != 0 && b != 0 && c !=0){
    cout << "YES";
}else{
    cout << "NO";
}
    return 0;
}
//g++ kattis-moscowdream.cpp -o kattis-moscowdream
// ./kattis-moscowdream
