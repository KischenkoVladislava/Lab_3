#include <iostream>
#include <cstdlib>
#include <string>
#include <iterator>
#include <stdio.h>
using namespace std;
int sumIterative(int** a, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}
int sumRecursive(int** a, int n, int m, int i, int j, int sum)
{
    if ((i == n - 1) && (j == m - 1))
    {
        return sum + a[i][j];
    }
    else
    {
        sum += a[i][j];
        j++;
        if (j == n)
        {
            i++;
            j = 0;
        }
        return sumRecursive(a, n, m, i, j, sum);
    }
}
int minIterative(int** a, int n, int m)
{
    int min;
    min = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    return min;
}
int minRecursive(int** a, int n, int m, int i, int j, int min)
{
    if ((i == n - 1) && (j == m - 1))
    {
        return min + a[0][0];
    }
    else
    {
        j++;
        if (j == n)
        {
            i++;
            j = 0;
        }
        if (a[i][j] < min)
        {
            min = a[i][j];
        }
    }
    return minRecursive(a, n, m, i, j, min);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    cout << "Введите размер массива" << endl;
    cin >> n >> m;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
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
    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Сумма элементов массива итерационно равна: " << sumIterative(a, n, m) << endl;
    cout << "Сумма элементов массива рекурсивно равна: " << sumRecursive(a, n, m, 0, 0, 0) << endl;
    cout << "Минимальный элемент в массиве итерационно: " << minIterative(a, n, m) << endl;
    cout << "Минимальный элемент в массиве рекурсивно: " << minRecursive(a, n, m, 0, 0, 0) << endl;
    return 0;
}
