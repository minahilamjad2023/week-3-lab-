#include <iostream>
using namespace std;

int main() {
    long long currentPopulation;
    int monthlyBirthRate;

   
   cout << "Enter the current world population: ";
   cin >> currentPopulation;

   
   cout << "Enter the monthly birth rate (number of births per month): ";
   cin >> monthlyBirthRate;

    
    long long populationInThreeDecades = currentPopulation + (monthlyBirthRate * 12 * 30);

    
    cout << "The population in three decades will be: " << populationInThreeDecades << endl;

   
}



