#include <iostream>
using namespace std;

int main(){
int test_case;
long long n;
int output;

cin >> test_case;

for(int i = 0; i < test_case; i++){
    cin >> n;

    n = (n * 567) / 9 + 7492;
    n = (n * 235) / 47 - 498;

    output = (n/10) % 10;
    cout << output << "\n";
}
    return 0;
}
