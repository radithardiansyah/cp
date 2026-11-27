#include<iostream>
#include<string>
using namespace std;

int main(){
string s;


for(int i = 0; i < 2000; i++){
    cin >> s;
if(s == "#"){
return 0;
}

for(char &c : s){
    c = toupper(c);
}
if(s == "HELLO"){
cout << "Case" << " " << i + 1 << " " << ":"<< " " << "ENGLISH" << "\n";
}else if(s == "HOLA"){
cout << "Case" << " " << i + 1 << " " << ":"<< " " << "SPANISH" << "\n";
}else if(s == "HALLO"){
cout << "Case" << " " << i + 1 << " " << ":"<< " " << "GERMAN" << "\n";
}else if(s == "BONJOUR"){
cout << "Case" << " " << i + 1 << " " << ":"<< " " << "FRENCH" << "\n";
}else if(s == "CIAO"){
cout << "Case" << " " << i + 1 << " " << ":"<< " " << "ITALIAN" << "\n";
}else if(s == "ZDRAVSTVUJTE"){
cout << "Case" << " " << i + 1 << " " << ":"<< " " << "RUSSIAN" << "\n";
}else {
    cout << "Case " << i + 1 << ": UNKNOWN\n";
}
}
    return 0;
}