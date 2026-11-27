//g++ kattis-isithalloween.cpp -o kattis-isithalloween
// ./kattis-isithalloween

#include<iostream>
using namespace std;
#include <string>

int main(){
string month;
int date;
cin >> month >> date;
if(month == "OCT" && date == 31){
    cout << "yup";
}else if(month == "DEC" && date == 25){
    cout << "yup";
}else{
    cout << "nope";
}
    return 0;
}
