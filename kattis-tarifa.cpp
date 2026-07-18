#include <iostream>
using namespace std;

int main(){
int megabytes;
int megabytes_const;
int month;
int megabytes_used;
cin >> megabytes;
cin >> month;
megabytes_const = megabytes;
for(int i = 0; i < month; i++){
    cin >> megabytes_used;
    megabytes -= megabytes_used;

    megabytes += megabytes_const;

}
cout << megabytes << "\n";
    return 0;
}
