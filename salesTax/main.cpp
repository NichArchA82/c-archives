#include <iostream>

using namespace std;

int main() {
    const float PURCHASE = 95.00;
    const float SALES_TAX = .04, COUNTY_TAX = .02;
    float totalTax, total;

    totalTax = (PURCHASE * SALES_TAX) + (PURCHASE * COUNTY_TAX);

    total = PURCHASE + totalTax;

    cout << "The total of the order is: " << total << endl;

    return 0;
}