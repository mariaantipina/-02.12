#include <iostream>
#include <ctime>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int i, j, n, m;
    srand(time(0));
    cout << "������� ���-�� ����� �������:";
    cin >> n;
    cout << "������� ���-�� �������� ������� :";
    cin >> m;
    int matr[20][20];
    for (int i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            matr[i][j] = rand() % 15;
    cout << "������ �������:" << endl;
    for (int i = 0; i < n; i++) {
        cout << endl;
        for (int j = 0; j < m; j++) {
            cout << matr[i][j] << "\t";
        }
    }
    int A, B;
    cout << endl << "������� ���������� ����� 2�� �������:";
    cin >> A;
    while (A != n)
    {
        cout << "���������� ����� 2�� ������� ������ ��������������� ���������� �������� 1��" << endl;
        cout << endl << "������� ���������� ����� 2�� �������:";
        cin >> A;
    }
    cout << "������� ���������� �������� 2�� �������: ";
    cin >> B;
    int matr2[20][20];
    cout << "������ �������:" << endl;
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
    cout << endl << "������������ ������:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < B; j++)
            cout << matr3[i][j] << "\t";
    }
    cout << endl;
    return 0;
}