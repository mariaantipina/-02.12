#include <iostream>

int find_max(int* arr, int size);
int find_min_index(int* arr, int size);

int main()
{
    const int n = 7;
    const int m = 3;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    for (int i = n - 1; i >= 1; i--)
    {
        int temp = find_min_index(arr[i], m);
        arr[i][temp] = find_max(arr[i - 1], m);
    }

    std::cout << "\n\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return(0);
}

int find_max(int* arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];

    return(max);
}

int find_min_index(int* arr, int size)
{
    int min = 0;
    for (int i = 1; i < size; i++)
        if (arr[i] < arr[min]) min = i;

    return(min);
}