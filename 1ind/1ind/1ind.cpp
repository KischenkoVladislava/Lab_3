#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a[9][9];
    cout << "Матрица:" << endl;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            a[i][j] = (rand() % (100 - 1 + 1) - 1);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Отображенная матрица:" << endl;
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}