#include<iostream> 
using namespace std;

int min(int, int);
int max(int, int);

int main ( void )
{
    int number[4];
    int out[4];

    cout << "input 4 nuber" << endl;
    for(int i = 0; i < 4; i++)
    {
    	cin >> number[i];
	}

    out[0] = max(max(number[0], number[1]), max(number[2], number[3]));
    out[1] = max(max(min(number[0], number[1]), min(number[2], number[3])),min(max(number[0], number[1]), max(number[2], number[3])));
    out[2] = min(min(max(number[0], number[1]), max(number[2], number[3])),max(min(number[0], number[1]), min(number[2], number[3])));
    out[3] = min(min(number[0], number[1]), min(number[2], number[3]));

    for(int i = 0; i < 4; i++) 
	{
		cout << number[i] << " ";
	}
    cout << endl;
    for(int i = 0; i < 4; i++) 
    {
    	cout << out[i] << " ";
	}
}

int min(int a, int b)
{
    if (a > b) return b;
    else return a;
}

int max(int a, int b)
{
    if (a < b) return b;
    else return a;
}
