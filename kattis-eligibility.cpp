#include<iostream>
#include<string>
using namespace std;

int main(){
string name;
char slash;
int c, year_pss, month_pss, day_pss, year_dob, month_dob, day_dob, courses;
cin >> c;
for(int i = 0; i < c; i++){
    cin >> name >> year_pss >> slash >> month_pss >> slash >> day_pss  >> year_dob >> slash>> month_dob >> slash >> day_dob>> courses;
if(year_pss >= 2010 || year_dob >= 1991){
    cout << name << " " << "eligible" << "\n";
}else if(year_pss < 2010 && year_dob < 1991 && courses >= 41){
    cout << name << " " << "ineligible" << "\n";
}else{
    cout << name << " " << "coach petitions" << "\n";
}
}
    return 0;
}