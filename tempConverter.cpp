#include <iostream>
using namespace std;

int main(){
    cout << "Enter temperature in F: ";

    double fahrenheit;
    cin >> fahrenheit;

    double celsiusConversion = (fahrenheit - 32) * 5 / 9;

    cout << celsiusConversion << " Celsius" << endl;

    return 0;

}