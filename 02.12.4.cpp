#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    time_t t;
    srand((unsigned)(&t));
    int arr[50][50];
    int N;
    cout << "введите размер массива: "<<endl;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = rand() % 20 - 10;
        }
    }
    int min = 3628;
    int im, jm;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (min > arr[i][j] && arr[i][j] > 0)
            {
                min = arr[i][j];
                im = i;
                jm = j;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "min:" << min << " im:" << im << " jm:" << jm << endl;
    int c;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != im && j != jm)
            {
                c = arr[i][jm];
                arr[i][jm] = arr[im][j];
                arr[im][j] = c;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}