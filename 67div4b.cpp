#include<iostream>
using namespace std;
#include <vector>

int main(){
int test_case, f;
vector<int>a;
cin >> test_case;
for(int i = 0; i < test_case; i++){
cin >> a[i];
f = a[0] * -1;
for(int i = 1; i < a.size(); i++){
    if(i >= 7){
f += a[i];
    }else{
f -= a[i];

    }
    
}
// 1 2 3 4 5 6

}
    return 0;
}