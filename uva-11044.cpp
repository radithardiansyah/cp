#include <iostream>
using namespace std;

int main(){
    int test_case;
    int rows;
    int s_rows;
    int columns;
    int s_columns;
    cin >> test_case;
    for(int i = 0; i < test_case; i++){
cin >> rows >> columns;
if(rows == 0 || columns == 0){
    return 0;
}
s_rows = (rows - 2)/3;
s_columns = (columns - 2)/3;


cout << s_rows * s_columns << "\n";

    }

    return 0;
}
