#include <iostream>
using namespace std;

// Fungsi untuk mencari FPB dengan Algoritma Euclidean
int fpb(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int fpb(int a, int b){
    while (b !)
}

// Fungsi untuk mencari KPK
int kpb(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / fpb(a, b);
}

int main() {
    int num1, num2;

    cout << "Masukkan bilangan pertama: ";
    cin >> num1;
    cout << "Masukkan bilangan kedua: ";
    cin >> num2;

    int hasilFpb = fpb(num1, num2);
    int hasilKpk = kpb(num1, num2);

    cout << "\n--- Hasil ---" << endl;
    cout << "FPB dari " << num1 << " dan " << num2 << " adalah: " << hasilFpb << endl;
    cout << "KPK dari " << num1 << " dan " << num2 << " adalah: " << hasilKpk << endl;

    return 0;
}
