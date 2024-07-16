#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    private:                                        // In this you can easily store the mechanism which is not important for the user but is essential for the system to work. This is abstraction
        void accelerate(){
            cout << "Torque: 355656" << endl;
        }
        void velocity() {
            cout << "156 kmph" << endl;
        }
        void angular_momentom() {
            cout << "Angulare Momentum: +5633" << endl;
        }
    
    public:
        void low_fuel() {
            cout << "Running Out of Fuel" << endl;
        }
        void press_accelerate() {
            cout << "Press this to Accelerate" << endl;
        }
        void company() {
            cout << "Company  Name: Tesla Inc." << endl;

        }
        void  model() {
            cout << "Model   : Model S" << endl;
        }

};


int main()
{
    Vehicle v;
    v.company();
    v.model();
    v.low_fuel();
    v.press_accelerate();
    return 0;
}