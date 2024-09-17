#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //constant variables to hold seating pricing
    const int CLASS_A_PRICE = 15, CLASS_B_PRICE = 12, CLASS_C_PRICE = 9;
    //variables to hold the number of seating for each class
    int classASeats, classBSeats, classCSeats;
    float totalSales;

    //get the amount of sales from each user
    cout << "Please enter the amount of sales (seperated by spaces) for class a, class b, and class c seating: ";
    cin >> classASeats >> classBSeats >> classCSeats;

    //calculate the amount of sales
    totalSales = (static_cast<float>(CLASS_A_PRICE) * classASeats) + 
                 (static_cast<float>(CLASS_B_PRICE) * classBSeats) +
                 (static_cast<float>(CLASS_C_PRICE) * classCSeats);

    //set the formatting of the program
    cout << setprecision(2) << fixed << showpoint;

    cout << "The total sales were $" << totalSales << endl;

    return 0;
}