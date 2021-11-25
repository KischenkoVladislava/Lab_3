#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a[7][7];
    cout << "Массив:" << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            a[i][j] = (rand() % (100 - 1 + 1) - 1);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Перевернутый массив:" << endl;
    for (int j = 0; j < 7; j++)
    {
        for (int i = 6; i >= 0; i--)
        {
            
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}