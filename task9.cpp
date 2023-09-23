#include <iostream>
using namespace std;

int main() {
    int ageInYears;

    
    cout << "Enter your age in years: ";
    cin >> ageInYears;

    int ageInDays = ageInYears * 365;

    cout << "Your age in days is approximately " << ageInDays << " days." << endl;

    return 0;
}