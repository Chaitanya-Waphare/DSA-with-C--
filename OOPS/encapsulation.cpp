#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Half{
    private:
    float a;
    float b;
    public:
    float solve(float input) {
        a = input;
        b = a/2;
        return b;
    }
};

class Person{
    private:                //This is Encapsulation as the user dont  have access to the data members directly they can only access this via getters and setters that too in public
    string name;
    int age;
    public:
    Person(string name, int age) {
        this-> name = name;
        this -> age = age;
    }
    Person() {          // This is done so that if we want to implement a new object and do not want to specify everything then and there (Like in object p2)

    }

    void setName(string name) {
        this-> name = name;
    }
    string getName() {
        return name;
    }
    void setAge(int age) {
        this-> age = age;
    }
    int getAge() {
        return age;
    }
};

int main()
{
    cout << "Enter the number : ";
    float n;
    cin >> n;
    Half h;
    cout << "The half of the number is: " << h.solve(n) << endl;

    Person person("Chaitanya Waphare", 22);
    cout << "Name is: " << person.getName() << endl;
    cout << "Age is: " << person.getAge() << endl;

    Person p2;
    p2.setName("Shraddha Waphare");
    p2.setAge(26);
    cout << "Name is: " << p2.getName() << endl;
    cout << "Age is: " << p2.getAge() << endl;
    
    return 0;
}