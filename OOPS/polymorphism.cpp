#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Sum {
    private:
    int a;
    int b;
    
    public:  
        void setData(int a, int b)  //setter function to initialize
        {
            this->a = a;
            this->b = b;
        }
        int getSum() {
            return a + b;
        }
        int getSum(int a, int b, int c) {               // This is called as Function Overloading(Same function but different parametes)
            cout << "Inside the overloaded method.\n";
            return a+b+c;
        }
};

class Animal{
    public:
        void Color(){
            cout<<"The color of animal is Black" << endl;
        }
};

class  Dog : public Animal{
    public:
        string breed = "Lab";   
        void Color() {                                          //This is called Runtime  Polymorphism or Duck Typing //Dog class inherits from Animal class so it is Virtual Fn
            cout << "Dog's color is white." << endl;            
        }
};


class Parent {
public:
    void GeeksforGeeks_Print()
    {
        cout << "Base Function" << endl;
    }
};
 
class Child : public Parent {
public:
    void GeeksforGeeks_Print()
    {
        cout << "Derived Function" << endl;
 
        // call of overridden function
        Parent::GeeksforGeeks_Print();
    }
};

int main()
{
    Sum obj;
    obj.setData(5,10);
    cout << "The sum of entered numbers is : "<< obj.getSum()<<endl;
    cout << "The sum of entered numbers is : "<<obj.getSum()<<"\n\n";
    cout << "The sum of all three numbers is :"<<obj.getSum(2,6,8) << endl;


    Animal d = Dog();
    d.Color();
    // cout << d.breed << endl;        This is ANimal  reference so it will not work as we are trying to access derived class variable using base class reference
    
    Dog g = Dog();
    cout << g.breed << endl;

    Child Child_Derived;
    Child_Derived.GeeksforGeeks_Print();
    return 0;
}