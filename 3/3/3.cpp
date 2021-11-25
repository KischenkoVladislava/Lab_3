#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m, k, n1, r;
    cout << "Введите размер массива" << endl;
    cin >> n >> m;
    int** a = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new int[m];
    }
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Массив" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Введите сдвиг массива" << endl;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            r = a[j][0];
            for (int l = 0; l < m - 1; l++)
            a[j][l] = a[j][l + 1];
            a[j][m - 1] = r;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}