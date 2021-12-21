#include <iostream>
#include <ctime>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int i, j, n, m;
    srand(time(0));
    cout << "введите кол-во строк матрицы:";
    cin >> n;
    cout << "введите кол-во столбцов матрицы :";
    cin >> m;
    int matr[20][20];
    for (int i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            matr[i][j] = rand() % 15;
    cout << "первая матрица:" << endl;
    for (int i = 0; i < n; i++) {
        cout << endl;
        for (int j = 0; j < m; j++) {
            cout << matr[i][j] << "\t";
        }
    }
    int A, B;
    cout << endl << "введите количество строк 2ой матрицы:";
    cin >> A;
    while (A != n)
    {
        cout << "количество строк 2ой матрицы должно соответствовать количеству столбцов 1ой" << endl;
        cout << endl << "введите количество строк 2ой матрицы:";
        cin >> A;
    }
    cout << "введите количество столбцов 2ой матрицы: ";
    cin >> B;
    int matr2[20][20];
    cout << "вторая матрица:" << endl;
    for (int i = 0; i < A; i++)
    {
        cout << endl;
        for (int j = 0; j < B; j++)
        {
            matr2[i][j] = rand() % 9;
            cout << matr2[i][j] << "\t";
        }
    }
    int matr3[20][20];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < B; j++)
        {
            matr3[i][j] = 0;
            for (int z = 0; z < A; z++)
                matr3[i][j] = matr3[i][j] + matr[i][z] * matr2[z][j];
        }
    cout << endl << "произведение матриц:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < B; j++)
            cout << matr3[i][j] << "\t";
    }
    cout << endl;
    return 0;
}