#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa)
    {
        name=aName;
        major=aMajor;
        gpa=aGpa;
    }

    bool hasHonors(){
        if (gpa>=3.5)
        {
            return true;
        } 
        return false;
    }
};

int main()
{
    Student student1("Jeremy", "Business", 2.4);
    Student student2("Pam", "Science", 6.5);

    cout<<student1.hasHonors();
    //true---1 false--0


    // return 0;
}