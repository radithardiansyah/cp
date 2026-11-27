//input 
//to get the number by ascii
//convert to string
//check if the number is 1 length if not pushback to array
//do the same for name 2
//than name1/name2 * 100 
//
//problem need to seek for further
//inside while loop
//string not more than 25
//result cannot more than 100%

#include<iostream>
using namespace std;
#include <cctype>
#include<vector>

int main(){
string name1, name2, name_string;
int name_become_number;
vector<int>name_two_to_1(2);
cin >> name1 >> name2;

for(char n : name1){
if(isalpha(n)){
	tolower(n);
	name_become_number += (n - 'a' + 1);

}
name_string = to_string(name_become_number);
}
for(int i = 0; i < name_string.length(); i++){
name_two_to_1.push_back(to_integer(name_string[i]));
}





	return 0;
}
