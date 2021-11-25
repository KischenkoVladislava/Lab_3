#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a[5][5];
    int b[5][5];
    int c[5][5];
    cout << "Матрица 1" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int l = 0; l < 5; l++)
        {
            a[i][l] = (rand() % (10 - 0 + 1) + 0);
            cout << a[i][l] << " ";
        }
        cout << endl;
    }
    cout << "Матрица 2" << endl;
    for (int l = 0; l < 5; l++)
    {
        for (int j = 0; j < 5; j++)
        {
            b[l][j] = (rand() % (10 - 0 + 1) + 0);
            cout << b[l][j] << " ";
        }
        cout << endl;
    }
    cout << "Перемножение двух матриц" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c[i][j] = 0;
           for (int l = 0; l < 5; l++)
            {
                    c[i][j] += a[i][l] * b[l][j];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {   
         for (int j = 0; j < 5; j++)
         {
            cout << c[i][j] << " ";
         }
            cout << endl;
    }
    return 0;
}