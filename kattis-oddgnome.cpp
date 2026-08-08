#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
//124
            for(int i = 1; i < n - 1; i++){
                if(a[i] != a[i - 1] + 1){
                    if(a[i + 1] - 1 == a[i - 1]){
                        cout << i + 1 << "\n";
                    }else{
                        cout << i << "\n";
                        break;
                    }
                }
            }
        }
/*
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 1; i < n - 1; i++) {
            if (a[i] != a[i - 1] + 1) {
                if (a[i + 1] == a[i - 1] + 1)
                    cout << i + 1 << '\n';   // posisi 1-based
                else
                    cout << i << '\n';       // posisi 1-based
                break;
            }
        }
    }
        */
//penggunaan tanpa nested loop
//pemahamn index
    
}
return 0;
}
