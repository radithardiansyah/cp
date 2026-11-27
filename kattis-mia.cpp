#include<iostream>
using namespace std;
#include<vector>

int main(){
vector<int>fp(2);
vector<int>sp(2);
int f_player_number_o,f_player_number_t, s_player_number_o, s_player_number_t;
int a, b, c, d;
int ab, cd;

while(cin >> a >> b >> c >> d && (a != 0 || b != 0 || c != 0 || d != 0)){
fp[0] = a;
fp[1] = b;
sp[0] = c;
sp[1] = d;

if(fp[0] > fp[1]){
f_player_number_o = fp[0];
f_player_number_t = fp[1];
}else{
	f_player_number_o = fp[1];
	f_player_number_t = fp[0];
}

if(sp[0] > sp[1]){
s_player_number_o = sp[0];
s_player_number_t = sp[1];
}else{
	s_player_number_o = sp[1];
	s_player_number_t = sp[0];

}
ab = f_player_number_o + f_player_number_t;
cd = s_player_number_o + s_player_number_t ;
if(f_player_number_o + f_player_number_t == s_player_number_o + s_player_number_t){
	cout <<"Tie." << '\n';
}else if(f_player_number_o == 1 && f_player_number_t == 2){
	cout << "Player 1 wins" << '\n';
}else if(f_player_number_o == 2 && f_player_number_t == 1 ){
cout << "Player 1 wins" << '\n';

}else if(s_player_number_o == 1 && s_player_number_t == 2){
	cout << "Player 2 wins" << '\n';
}else if(s_player_number_o == 2 && s_player_number_t == 1 ){
cout << "Player 2 wins" << '\n';
}else if(f_player_number_o == f_player_number_t){
cout << "Player 1 wins" << '\n';
}else if(s_player_number_o == s_player_number_t){
cout << "Player 2 wins" << '\n';
}else if(f_player_number_o + f_player_number_t > s_player_number_o + s_player_number_t){
cout << "Player 1 wins" << '\n';
}else{
cout << "Player 2 wins" << '\n';


}

}


	return 0;
}
