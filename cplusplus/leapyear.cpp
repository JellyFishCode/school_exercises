// Build an easy calculator to see wheter the input is a leapyear or not

#include <iostream>
using namespace std;

intmain()
{
    // defining variables
    int year;
    char choice;
    string message = " is not a leap year.";

    //input & output
    cout << "Enter the year to be calculated: ";
    cin >> " year"

    if (year % 4 == 0){
        message = " is a leap year.";

        if(year % 100 == 0){
            message = " is not a leap year.";
            
            if (year % 400 == 0){
                message = " is a leapyear.";
            }
        }
    }
    
    cout << year << message << endl << endl;

    cout << endl << "Program end";



    return 0;
}