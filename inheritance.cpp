#include <iostream>
using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        cout << "The chef makes chicken " << endl;
    }
    void makeSalad()
    {
        cout << "The chef makes Salad " << endl;
    }
    void makeSpecialDish()
    {
        cout << "The chef makes bbq nation " << endl;
    }
};


// Inheritance is the property of inheriting the properties of the subclass from the super class
class ItalianChef : public Chef  //Extending the subclass by inheriting the properties of the parent class 
{
public:
    void makePasta()
    {
        cout << "The italian chef makes pasta " << endl;
    }
    void makeSpecialDish(){ //overiding the functions of super class to get the properties
        cout<<"The italian chef makes chicken tikka "<<endl;
    }
};

int main()
{
    Chef chef;
    chef.makeChicken();
    ItalianChef itchef;
    itchef.makeChicken();
    itchef.makePasta();
    chef.makeSpecialDish();
    itchef.makeSpecialDish();
}