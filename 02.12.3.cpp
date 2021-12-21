#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "введите размер матрицы:" << endl << "N = ";
    cin >> N;
    int** arr = new int* [N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[N];
    }
    cout << "введите элементы:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            swap(arr[i][j], arr[N - j - 1][N - i - 1]);
        }
    }
    cout << "ответ:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}