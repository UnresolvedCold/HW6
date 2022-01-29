//date.cpp

#include "date.h"
#include "iostream"
#include "ctime"

// Getters
int DateDay(Date d) {
    return d.day;
}

int DateMonth(Date d) { 
    return d.month; 
} 

int DateYear(Date d) { 
    return d.year; 
}

// Custom Functions
// To Print a Date in a proper format
void DatePrint(Date d) { 
    std::cout<< d.month << '/' << d.day << '/' << d.year<<std::endl; 
}

// To Set a Date
Date DateSet(int year, int month, int day){
    Date date; 
    date.day = day; 
    date.month = month; 
    date.year = year;
    return date;
}

// To get the current date
Date DateNow () {
    Date d = { 1, 1, 1970};
    time_t t = time(0L);
    tm *tp;             
    if (t == (time_t)(-1))
    return d;
    tp = localtime(&t); 
    d.day = tp->tm_mday;
    d.month = tp->tm_mon + 1;  
    d.year = tp->tm_year + 1900; 
    return d;
}