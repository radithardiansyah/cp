#include<iostream>
using namespace std;
#include <cmath>
int main(){
int a, b, besar_99, kecil_99;

    while(cin >> a >> b){
  if(a == -1 && b == -1){
        return 0;
    }

    if(a == 0 && b == 99){
        cout << "1" << "\n";
    }else if(a == 99 && b == 0){
        cout << "1" << "\n";
    }else{
 besar_99 = (99-a)+b+1;
    kecil_99 = (99 - b)+a+1;
   if(abs(a-b) < besar_99 && abs(a-b) < kecil_99){
         cout << abs(a-b) << "\n";
    }else  if(besar_99 < kecil_99){
        cout << besar_99 << "\n";
    }else if(kecil_99 < besar_99){
        cout << kecil_99 << "\n";
    
    }
    }
    }
  
   

    return 0;
}