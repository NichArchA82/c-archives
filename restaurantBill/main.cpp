#include <iostream>

using namespace std;

int main() {
    const float MEAL_CHARGE = 88.67, TAX = .0675, TIP = .2;

    float totalTax, totalTip, totalSale; 

    totalTax = MEAL_CHARGE * TAX;
    totalTip = (MEAL_CHARGE + totalTax) * TIP;
    totalSale = MEAL_CHARGE + totalTax + totalTip; 

    cout << "The meal cost $" << MEAL_CHARGE << endl;
    cout << "The tax is $" << totalTax << endl;
    cout << "The tip is $" << totalTip << endl;
    cout << "The total sale is $" << totalSale << endl;

    return 0;
}