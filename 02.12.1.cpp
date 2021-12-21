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

    cout << "������� ����� ����� ";
    cin >> M;
    cout << "������� ����� �������� ";
    cin >> N;

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++){
            cout << "�������[" << i + 1 << "][" << j + 1 << "] ������� ������� ";
            cin >> A[i][j];
        }
    cout << "\n";
    cout << "�������: " << endl;
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
    cout << "����������� �� ������ �������: " << min << endl;

    //�������� ������
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

    //�������� �������
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++){
            s = j;
            if (j + 1 >= miny) {
                s -= 1;
                newA[i][s] = A[i][j];
            }
        }
    }

    cout << "�����:" << endl;
    for (int i = 0; i < M - 1; i++) {
        for (int j = 0; j < N - 1; j++) {
            cout << setw(4) << newA[i][j];
        }
        cout << endl;
    }
}