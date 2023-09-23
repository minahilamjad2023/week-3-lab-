#include <iostream>
using namespace std;

int main() {
    int hours;

    
   cout << "Enter the number of hours: ";
    cin >> hours;

  
    int seconds = hours * 3600; // 1 hour = 3600 seconds

   
    cout << hours << " hours is equivalent to " << seconds << " seconds." << endl;

    return 0;
}