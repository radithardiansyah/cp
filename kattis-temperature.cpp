#include<iostream>
using namespace std;

int main(){
int a, b, c_bracket, new_32, c_a, c_b;
cin >> a >> b;
if(b == 0){
    return 0;
}

new_32 = 32 * b;
c_bracket = a - new_32;

c_a = c_bracket  * 5;
c_b = b * 9;
if(c_a % c_b == 0){
cout << c_a/c_b<< "/" << c_b/c_b;
}else{
    cout << c_a << "/" << c_b ;
}
 

    return 0;
}