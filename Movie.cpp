#include "Movie.h"
using namespace std;
#include <iostream>

Movie::Movie(string type, string id, string title, string genre, string duration)
    : Video(type, id, title, genre, duration) {}

ostream &operator<<(ostream &os, const Movie &movie)
{
    os << "ID: " << movie.id << "|Title: " << movie.title << "|Genre: " << movie.genre << "|Duration: " << movie.duration << " mins" << "|Rating: ";
    double score = movie.getAverage();
    if (score < 0)
        os << "SC";
    else
        os << score;
    return os;
}

// void Movie::print()
// {
//     cout << "ID: " + id + "|Title: " + title + "|Genre: " + genre + "|Duration: " + duration + " mins" + "|Rating: ";
//     double score = getAverage();
//     if (score < 0)
//     {
//         cout << "SC";
//     }
//     else
//     {
//         cout << score;
//     }
//     cout << endl;
// }

void Movie::printByScore()
{
    cout << "ID: " + id + "|Title: " + title + "|Rating: ";
    double score = getAverage();
    if (score < 0)
    {
        cout << "SC";
    }
    else
    {
        cout << score;
    }
    cout << endl;
}

void Movie::printByGenre()
{
    cout << "ID: " + id + "|Title: " + title + "|Genre: " + genre + "|Rating: ";
    double score = getAverage();
    if (score < 0)
    {
        cout << "SC";
    }
    else
    {
        cout << score;
    }
    cout << endl;
}
