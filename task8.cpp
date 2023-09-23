#include<iostream>
using namespace std;
main()
{       cout<< "Enter voltage (in volts): ";
        int voltage;
        cin>> voltage;
        cout<< "Enter current (in amperes): ";
        float current;
        cin>> current;
        cout<< "The power is  " << voltage*current <<  " watts";
}
