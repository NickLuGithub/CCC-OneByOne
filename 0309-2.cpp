#include <iostream>
using namespace std;

int print_month(int, int);
bool isLeap(int);

int main ( void ){
    int FirstDay, Year;

    cout << "Enter NewYearDay and Year: " << endl;
    cin >> FirstDay >> Year;
    FirstDay--;
    for(int i = 1; i <= 12; i++)
    {
    	cout << "      " << i << "     " << endl; 
        if(i == 2) {
            if(isLeap(Year)) FirstDay = print_month(FirstDay, 29);
            else FirstDay = print_month(FirstDay, 28);
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            FirstDay = print_month(FirstDay, 30);
        } else {
            FirstDay = print_month(FirstDay, 31);
        }
    }

}

bool isLeap(int year)
{
    if(((year % 4 == 0) & (year % 100 != 0)) || (year % 400 == 0)) return true;
    else return false;
}

int print_month(int first_day, int month_day)
{
	cout << " 一 二 三 四 五 六 日" << endl;
	
    for (int i = 0; i <= first_day-1; i++)
    {
        cout << "   ";
    }

    for(int i = 1; i <= month_day; i++)
    {
        printf("%3d", i);
        first_day++;
        if(first_day >= 7) {
            first_day = first_day % 7;
            cout << endl;
        }
    }
    
    cout << endl;
    return first_day;
}
