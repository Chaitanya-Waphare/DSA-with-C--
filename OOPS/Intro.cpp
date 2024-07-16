#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hero {
    public:
        int health = 0;
        int value = 0;
        int level = 545645;

    private:
        int power;
    
    public:
        Hero() {
            cout << "Constructor Called" << endl;
        }
        int getPower() {                    //Remember that gettr and setter should be public and not private
            return power;
        }
        void setPower(int power) {
            this->power = power;
        }

};


int main()
{
    Hero h1;
    cout << "Health: " <<  h1.health << endl;
    cout << "Value: " << h1.value << endl;
    cout << "Size: " << sizeof(Hero) << endl; // Size of the class not object
    cout << "Level: "  << h1.level << endl;

    h1.setPower(987);
    cout << "Power: " << h1.getPower() << endl;

    Hero *h2 = new Hero;   //Dynamic allocation
    (*h2).health = 3;       //Accessing the pointer means *h2
    h2->value = 80;
    h2->setPower(123);
    cout<<"Health: "<<h2->health<<endl;
    cout << "Value: " << h2->value << endl;
    cout << "Power: " << h2->getPower() << endl;
    delete h2;              //Don't forget to deallocate memory when you are done with it!

    Hero h3(h1);           //Copy constructor
    cout << "Copy Constructor Created" << endl;
    cout << "Health: " <<  h3.health << endl;
    cout << "Value: " << h3.value << endl;
    cout << "Level: "  << h3.level << endl;
    cout << "Power: " << h3.getPower() << endl;

    
    return 0;
}