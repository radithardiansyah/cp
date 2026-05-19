#include <iostream>
#include <vector>
using namespace std;

using Matrix = vector<vector<int>>;

Matrix rotate90(const Matrix& a){
    int n = a.size();
    int m = a[0].size();

    Matrix res(m, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res[j] [n - 1 - i] = a[i][j];
        }
    }
return res;

}
