#include <iostream>
using namespace std;
#include <vector>
//baris menggambarkan banyak troops, jika troops sisa floor
int main(){
    long long howManyTestCase = 0;
    cin >> howManyTestCase;
    vector<long long> warriors(howManyTestCase);
    for(int i = 0; i < howManyTestCase; i++){
        cin >> warriors[i];
    }
    //loop mengambil nilai dari warriors
    //nilai dari warriors menjadi warrior di taruh di loop sebanyak dirinya dan akan terus dikurangkan dengan variabel row yg akan terus bertambah
    //jika varibel warrior != 0 && <0 stop dan masukkan rowsFit ke vector output
    //kondisi 1 != 0 
    vector<long long>output;

    int row = 1;
    int rowFit = 0;
    int warrior = 0;
    for(int i = 0; i < warriors.size(); i++){
        if(warriors[i] - row != 0){
            row ++;
            rowFit ++;
warrior = warriors[i];
for(int i = 0; i < warrior; i++){
    if(warrior - row != 0 && warrior <! 0){
row++;
rowFit++;
    }else if(warrior = 0){
        output.push_back(rowFit);
row = 1;
rowFit = 0;
    }
}
        }
    }
      for(int i = 0; i < output.size(); i++){
        cout << output[i];
    }

    return 0;
}