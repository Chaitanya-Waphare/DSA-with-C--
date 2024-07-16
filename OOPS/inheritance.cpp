#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Person {
    public: 
        string name;
        int age;
        int id;
        int dept;

    void get_id() {
        cout << "Enter the name: ";
        cin >> name;
        cout << "\nEnter the age: ";
        cin >> age;
        cout << "Enter id: ";
        cin>>id;
        cout <<  "Enter department number: ";
        cin>>dept;
    }
    
    void  display_P() {
        cout << "Name : "<<name<<endl;
        cout << "Age : "<<age<<endl;
        cout << "ID : "<<id<<endl;
        cout << "Department Number :"<<dept<<endl;
    }
};

class Teacher : private Person{
    public:
        string gender;
        int subject_code;
    
    void  get_details() {
        get_id();
        cout << "Gender (M/F): ";
        cin>>gender;
        cout << "Subject Code: ";
        cin >>subject_code;
    }

    void display_C() {
        display_P();
        cout << "Gender: " << gender << endl;
        cout << "Subject Code: " << subject_code << endl;
    }
};

int main()
{

    Teacher t1;
    t1.get_details();

    Teacher *t2 = new Teacher;
    t2->get_details();
    t2->display_C();
    t1.display_C();
    
    return 0;
}