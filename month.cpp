#include<iostream>
using namespace std;
int main(){
    int year;
    int month;
    int days;
    
    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a month: ";
    cin >> month;
    
    if(month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else if(month == 2)
        if(year % 4 != 0 && year % 400 != 0)
            days = 28;
        else if(year % 100 != 0)
            days = 29;
        else 
            days = 29;
    else
        days = 31;
    return days;
}
