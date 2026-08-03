#include<iostream>
using namespace std;


int main(){
int x, y, n;
cin >> x >> y >> n;
for(int i = 0; i < n; i++){
 if(x % i+1 == 0){
    cout << "fizz" << "\n";
 }else{
    cout<<i+1<<"\n";
 }
}
    return 0;
}