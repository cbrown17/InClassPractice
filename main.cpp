//
//  main.cpp
//  Demos
//
//  Created by Cassandra  Brown on 2/25/20.
//  Copyright © 2020 Cassandra  Brown. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    
    double inches = 0.0;
    double centimeters;
    double conversionfactor = 2.54;
    
    cout.setf(ios::fixed); //displays decimal notation
    cout.precision(3); //set the output to print 3 numbers to the right of the decimal point
    
    cout << "convert inches to centimeters" << endl;
    
    while(inches <= 20.0) //while inches is less than or equal
    {
        centimeters = conversionfactor * inches; //convert inches to centimeters
        cout << setw(6) << inches << setw(10) << centimeters << endl; //setw is a manipulator that works when results needs to be printed in a table format.
        inches += 0.5; //increments inches by 0.5
    }
    return 0;
}
