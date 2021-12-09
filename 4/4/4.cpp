#include <iostream>
using namespace std;
int slogenie(int a[3][3], int b[3][3], int n, int m)
{
    int** c = new int* [n];
    for (int i = 0; i < n; i++)
    {
        c[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return **c;
}
int vichitanie(int a[3][3], int b[3][3], int n, int m)
{
    int** c = new int* [n];
    for (int i = 0; i < n; i++)
    {
        c[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return **c;
}
int srchislo(int a[3][3], int b[3][3])
{
    int sum, sr;
    int sum1 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum1 += a[i][j];
        }
    }
    int sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum2 += b[i][j];
        }
    }
    sum = sum1 + sum2;
    sr = sum / 18;
    return sr;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a[3][3];
    cout << "Введите элементы массива 1" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Массив 1:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int b[3][3];
    cout << "Введите элементы массива 2" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Массив 2:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Поэлементное сложение:" << endl;
    cout << slogenie(a, b, 3, 3);
    cout << "Поэлементное вычитание:" << endl;
    cout << vichitanie(a, b, 3, 3);
    cout << "Среднее значение всех элементов входных массивов:" << endl;
    cout << srchislo(a, b);
    return 0;
}
  
  
