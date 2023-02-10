#include <iostream>
using namespace std;
int main(){
    double sales;

    cout << "State Tax = 4% " << endl << "County Tax = 2%" << endl;
    cout << "Total sales($): $";

    cin >> sales;

    const double stateTaxRate = 0.04;
    const double countyTaxRate = 0.02;

    double stateTax = sales * stateTaxRate;
    double countyTax = sales * countyTaxRate;

    cout << "State tax amount: $" << stateTax << endl 
         << "County tax amount: $" << countyTax << endl;

    cout << "Total tax: $" << countyTax + stateTax << endl;
    
    return 0;
}