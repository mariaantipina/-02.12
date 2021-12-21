#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");


    int A[50][50];
    int newA[50][50];
    int M, N;

    cout << "введите число строк ";
    cin >> M;
    cout << "введите число столбцов ";
    cin >> N;

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++){
            cout << "введите[" << i + 1 << "][" << j + 1 << "] элемент матрицы ";
            cin >> A[i][j];
        }
    cout << "\n";
    cout << "матрица: " << endl;
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            cout << setw(4) << A[i][j];
        }
        cout << "\n";
    }

    int minx; 
    int miny; 
    int min = 3485;

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if (abs(A[i][j]) < min){
                min = abs(A[i][j]);
                minx = i;
                miny = j;
            }
        }
    }
    cout << "минимальный по модулю элемент: " << min << endl;

    //удаление строки
    int f, s;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++){
            f = i;
            if (i + 1 >= minx) {
                f -= 1;
                newA[f][j] = A[i][j];
            }
        }
    }

    //удаление столбца
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++){
            s = j;
            if (j + 1 >= miny) {
                s -= 1;
                newA[i][s] = A[i][j];
            }
        }
    }

    cout << "ответ:" << endl;
    for (int i = 0; i < M - 1; i++) {
        for (int j = 0; j < N - 1; j++) {
            cout << setw(4) << newA[i][j];
        }
        cout << endl;
    }
}