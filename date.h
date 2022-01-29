//date.h
#ifndef DATE_H 
#define DATE_H
struct Date { 
    int month; 
    int day; 
    int year; 
};

void DatePrint(Date); 
int DateDay(Date); 
int DateMonth(Date); 
int DateYear(Date); 
Date DateSet(int yr, int mon, int dy); 
Date DateNow();

#endif