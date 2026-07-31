#include<iostream>
using namespace std;
#include <cmath>
int main(){
int case_ajah, a, b, besar_99, kecil_99;
cin >> case_ajah;
for(int i = 0; i < case_ajah; i++){
    cin >> a >> b;
    if(a == -1 && b == -1){
        return 0;
    }
    //90
    //1
    //11
    //10

    //90
    //2
    //9+2+1
//13 30

//2 90

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
   
    /*
    else if((99-a)+b+1 < abs(a-b)){
        cout << (99-a)+b+1 << "\n";
    }else{
        cout << abs(a-b) << "\n";
    }
        */
}
    return 0;
}