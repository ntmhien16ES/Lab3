// lab3_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>

#define     MAX_MONTH   12
#define     MIN_MONTH   1

#define     MAX_DAY     31
#define     MIN_DAY     1



using namespace std;

int main()
{
    string myString;
    string day, month, year;
   
    cout << "Enter a date in the format dd/mm/yy: ";
    cin >> myString;

    const int first_char = myString.find_first_of('/');
    const int last_char = myString.find_last_of('/');

    month = myString.substr(0, first_char);
    day = myString.substr(first_char + 1, last_char - first_char - 1);
    year = myString.substr(last_char + 1, 4);
    
    int int_month = atoi(month.c_str());

    switch (int_month)
    {
    case 1:
        month = "January";
        break;
    case 2:
        month = "Feburary";
        break;
    case 3:
        month = "March";
        break;
    case 4:
        month = "April";
        break;
    case 5:
        month = "May";
        break;
    case 6:
        month = "June";
        break;
    case 7:
        month = "July";
        break;
    case 8:
        month = "August";
        break;
    case 9:
        month = "September";
        break;
    case 10:
        month = "October";
        break;
    case 11:
        month = "November"; 
        break;
    case 12:
        month = "December";
        break;
    }

    cout << "The date is: " << month << " " << day << ", " << year;
  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
