/*
SystemLogging.cpp : This file contains the 'main' function.Program execution begins and ends there.
===================================================
|               System Logging                    |          
|                     By                          |        
|                    SM982                        |
|            https://github.com/sm982             |    
===================================================
*/

#include <iostream>
#include <fstream> 
#include <string> 
#include <ctime>
#include "timeFile.h" // Includes variables for the todayTotalDate variable used for the document name.

using namespace std;
fstream myfile;

int main()
{
    //Program Variables.
    int exit;
    string line;
    fstream myfile;
    string log1 = "This is a log 1.";

    //Program execution
    myfile.open("/logs/SystemLog " + todayTotalDate + ".txt", fstream::in | fstream::app);
    myfile.seekg(0, ios::end);

    myfile << '\n';
    getline(cin, line, '\n'); // grabs user input and puts it into the file, delete this and the line below if you don't want this.
    myfile << log1; // logs the string, this program is useful if you have a program and want to log user related stuff, just assign the string some value you want and it'll input it into the file.
    myfile << '\n';

    myfile.clear();
    myfile.seekg(0);
    while (getline(myfile, line))

    {
        cout << line << '\n';
    }

    cin >> exit;
    return exit;
}
