#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;

public:

    virtual void sound() {
        cout << "Some sound" << endl;
    }   
};

class Dog : public Animal {

public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog dog1;

    dog1.sound();

    return 0;
}