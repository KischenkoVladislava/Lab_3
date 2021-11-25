#include <iostream>
using namespace std;
int  Minor(int** a, int** b, int N, int i, int j)
{
    int  ai, aj, bi, bj;
    bi = 0;
    for (ai = 0; ai < N - 1; ai++)
    {
        if (ai == i)
        {
            bi = 1;
        }
        bj = 0;
        for (aj = 0; aj < N - 1; aj++)
        {
            if (aj == j)
            {
                bj = 1;
                b[ai][aj] = a[ai + bi][aj + bj];
            }
        }
    }
    return Minor(a, b, N, i, j);
}
int Opred(int** a, int N)
{
    int j = 0, d = 0;
    int** b;
    b = new int* [N];
    for (int i = 0; i < N; i++)
    {
        b[i] = new int[N];
    }
    if (N == 1)
    {
        return a[0][0];
    }
    if (N == 2)
    {
        return (a[0][0] * a[1][1] - (a[0][1] * a[1][0]));
    }
    if (N > 2)
    {
        for (int i = 0; i < N; i++)
        {
            int M = Minor(a, b, N, i, 0);

            d += pow(-1, i) * a[i][0] * Opred(a, N);
        }   
    }
    return d;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите " << endl;
    cin >> N;
    int** a = new int* [N];
    for (int i = 0; i < N; ++i)
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
    cout << "Массив" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "hjdfd" << Opred(a, N);
    return 0;
}
