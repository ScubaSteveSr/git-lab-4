/**
 *   @file: wageplan.cc
 * @author: Blake Wood
 *   @date: 09/19/2025
 *  @brief: Determines which pay plan is better
 */

#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;

double sales;
const double A_COMMISSION = .10;
const double B_COMMISSION = .15;
double plan1;
double plan2;


int main(){

    cout << "Enter the weekly sales amount: ";
    cin >> sales;
    plan1 = (5.50 * 40) + (sales * A_COMMISSION);
    plan2 = (sales * B_COMMISSION);

    cout << "Plan 1 pays $" << fixed << setprecision(2) << plan1 << endl;
    cout << "Plan 2 pays $" << fixed << setprecision(2) << plan2 << endl;
    
    if (plan1 > plan2) {
        cout << "Plan 1 is better" << endl;
    }

    else {
        cout << "Plan 2 is better" << endl;
    }
    
    return 0;
}