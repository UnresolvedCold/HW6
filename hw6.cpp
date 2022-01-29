/*
 * HW6.cpp
 * This file will walk you through the various functionalites of the Date class.
 * 
 * To compile & run the program, run the following commands:
 * > g++ date.cpp hw6.cpp -o hw6
 * > ./hw6
 */

#include <iostream>
#include "date.h"   

using namespace std;

int  main() {
    // Create a Date object
    Date d = DateNow();
    cout<<"The current Date is (MM/DD/YYYY): "; 

    // Print the date
    DatePrint(d);
    cout<<"Date Day is: "<<DateDay(d)<<endl;
    cout<<"Date Month is: "<<DateMonth(d)<<endl;
    cout<<"Date Year is: "<<DateYear(d)<<endl;

    // Set the date to yesterday
    cout<<"\nChange the date to yesterday\n";
    d = DateSet(DateYear(d), DateMonth(d), DateDay(d)-1);

    cout<<"Yesterday was: "; 
    DatePrint(d);
    cout<<'\n';
    
    return 0;
}