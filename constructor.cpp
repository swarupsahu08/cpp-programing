#include<iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        //Constructor are those functions with the same class name where we can pass every parameters to decrease the lines of code

        // Book(string name){
        //     cout<<name<<endl;
        // }
        Book(){
            title="no title";
            author="no author";
            pages=0;
        }
        Book(string aTitle,string aAuthor,int aPages){
            title=aTitle;
            aAuthor=author;
            pages=aPages;
        }
};

int main(){
    // Book book1("Harry Potter");
    // Book book2("Mahabharat");

    // Book book2;
    // book2.title="Lord of the Rings";
    // book2.author="Tolkein";
    // book2.pages=700;

    // Book book3;
    // book3.title="Mahabharat";
    // book3.author="Vedavyas";
    // book3.pages=1000;

    Book book1("Mahabharat","Vedvyas",1000);
    cout<<book1.title<<endl;

    Book book3;
    cout<<book3.title;
}