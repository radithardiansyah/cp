#include<iostream>
using namespace std;
#include<vector>

int main()
{

    int baris1, baris2, kolom1, kolom2;
   cin >> baris1 >> kolom1;
   vector<vector<int>>matriks1(baris1, vector<int>(kolom1));

   for(int i = 0; i < baris1; i++)
   {
    for(int j = 0; j < kolom1; j++)
    {
        cin>>matriks1[i][j];
    }
   }

   vector<vector<int>>matriks2(baris2, vector<int>(kolom2));
   for(int i = 0; i < baris2; i++)
   {
    for(int j = 0; j < kolom2; j++)
    {
        cin>>matriks2[i][j];
    }
   }


return 0;
}