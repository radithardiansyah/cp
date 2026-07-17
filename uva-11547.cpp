#include <iostream>
using namespace std;

int main(){
int test_case;
double n;
double f_n;
int f1_n;
int output;

cin >> test_case;

for(int i = 0; i < test_case; i++){
    cin >> n;
    f_n = (n * 567)/9 + 7592 * 235;
    f1_n = (f_n/47) - 498;

    output = (f1_n/10) % 10;
    cout << output << "\n";
}
    return 0;
}
