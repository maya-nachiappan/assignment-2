//  assignment 2
//
//  Created by maya nachiappan on 9/6/24.
//
// assignment to show the sales tax, estate tax, county tax and total tax needed to be paid on an income of 95,000.

#include <iostream>
using namespace std;

int main ()
{
    int income, estateTax, countyTax, totalTax;
    income = 95000;
    estateTax = (4/100)*income;
    countyTax = (2/100)*income;
    totalTax =countyTax + estateTax;
}

