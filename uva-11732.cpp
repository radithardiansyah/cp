#include<iostream>
using namespace std;
#include<cmath>

int main(){
   int r, n, numberr = 0;
   double k;

while(cin >> r >> n){
 if(r == 0 && n == 0){
        return 0;
    }
    numberr++;
k = (double)(r -n)/n;
if(k > 26){
    cout << "Case"<< " " << numberr<< ":"<< " "<< "impossible" << "\n";
    
}else if(r%n == 0){
   cout << "Case"<< " " << numberr<< ":"<< " "<<(r/n) - 1 << "\n";
   
}else{
cout << "Case"<< " " << numberr<< ":"<< " "<< floor(r/n) << "\n";

}
}

   


    
   

    return 0;
}
//mengerti soal
//buat contoh untuk ujicoba
