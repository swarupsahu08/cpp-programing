#include <iostream>
using namespace std;

class Movie
{
private:
    string rating;
//Getters and Setter are used to access the private attributes of any class
public:
    string title;
    string director;
    // string rating;
    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        } else{
            rating="NR";
        }
    }

    string getRating(){
        return rating;
    }
};

int main()
{
    Movie movie1("The Avengers", "Joss Weden", "Pg-13");
    movie1.setRating("R");
    cout<<movie1.getRating()<<endl;
}