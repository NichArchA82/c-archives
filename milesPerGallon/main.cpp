#include <iostream>
using namespace std;

int main() {
    double gasTank, milesDriven, mpg;

    cout << "Enter the amount of gallons your gas tank holds: ";
    cin >> gasTank;
    cout << "Enter the amount of miles that you can drive on a full tank of gas: ";
    cin >> milesDriven;

    mpg = static_cast<double>(milesDriven) / gasTank;

    cout << "Your car's mpg is " << mpg << endl;

    return 0;
}