#pragma once
/*
timeFile.h : This file contains the 'header' file to get the current date in short format.
===================================================
|               System Logging					  |
|				timeFile header					  |
|                     By                          |
|                   SM982						  |
|            https://github.com/sm982             |
===================================================
*/

#pragma warning(disable : 4996) // Used to disable error that is related to the localtime variable in ctime.
#include <string> 
#include <ctime>

using namespace std;

time_t now = time(0);
tm* ltm = localtime(&now);
string todayDay = to_string(ltm->tm_mday) + "-";
string todayMonth = to_string(1 + ltm->tm_mon) + "-";
string todayYear = to_string(1900 + ltm->tm_year);
string todayTotalDate = todayDay + todayMonth + todayYear;