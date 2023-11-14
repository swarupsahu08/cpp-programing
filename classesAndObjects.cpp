#include<iostream>
using namespace std;

//Class is a blueprint to new datatyoe in a program:class is the specifixation of the blue print but object is the actual instance of that class 
class Book{
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    // Here we havce to create an object to the classs named Book
    Book book1;  //book1 is the object
    book1.title="Harry Potter";
    book1.author="JK Rowling";
    book1.pages=500;

    Book book2;
    book2.title="Lord of the Rings";
    book2.author="Tolkein";
    book2.pages=700;

    Book book3;
    book3.title="Mahabharat";
    book3.author="Vedavyas";
    book3.pages=1000;

    cout<<book1.title<<endl;
    cout<<book1.pages<<endl;

    cout<<book2.author<<endl;
    cout<<book3.title;




    




    return 0;
}