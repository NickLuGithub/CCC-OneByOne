#include <iostream>
using namespace std;

void print_two_array(int, int[][100]);

int main(void)
{
    int a[100][100] = { {3, 2, 8}, {5, 6, 1}, {7, 4, 9} };
    int b[100][100] = { {6, 3, 8}, {1, 9, 2}, {4, 7, 5} };
    int c[100][100] = { 0 };

    int n = 3;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
    
    print_two_array(n, a);
    cout << endl;
    print_two_array(n, b);
    cout << endl;
    print_two_array(n, c);
    cout << endl;
}

void print_two_array(int n, int pList[][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << pList[i][j] << " ";
        }
        cout << endl;
    }
}
