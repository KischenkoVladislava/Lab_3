#include <iostream>
using namespace std;
void Minor(int** a, int N, int row, int col, int** b)
{
    int r = 0;
    int c = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if (i == row)
        {
            r = 1;
        }
        c = 0;
        for (int j = 0; j < N - 1; j++)
        {
            if (j == col)
            {
                c = 1;
            }
            b[i][j] = a[i + r][j + c];
        }
    }
}
int Opred(int** a, int N)
{
    int opr = 0;
    int st = 1;
    if (N == 1)
    {
        return a[0][0];
    }
    else if (N == 2)
    {
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];
    }
    else
    {
        int** b = new int* [N - 1];
        for (int i = 0; i < N - 1; i++)
        {
            b[i] = new int[N - 1];
        }
        for (int j = 0; j < N; j++)
        {
            cout << a[0][j];
            Minor(a, N, 0, j, b);
            opr += (st * a[0][j] * Opred(b, N - 1));
            st = -st;
        }
        for (int i = 0; i < N - 1; i++)
        {
            delete[] b[i];
        }
        delete[] b;
    }
    return opr;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите размер матрицы N" << endl;
    cin >> N;
    int** a = new int* [N];
    for (int i = 0; i < N; i++)
    {
        a[i] = new int[N];
    }
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Массив:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Определитель матрицы:" << endl << Opred(a, N);
    return 0;
}

