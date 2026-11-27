#include <iostream>
using namespace std;
#include <iomanip>

int main(){
int periods;
cin >> periods;
double quality_of_life;
double years;
double sum = 0.0;
for(int i = 0; i < periods; i++){
    cin >> quality_of_life >> years;

    sum += quality_of_life * years;
}
cout << fixed << setprecision(6) << sum << "\n";

    return 0;
}
