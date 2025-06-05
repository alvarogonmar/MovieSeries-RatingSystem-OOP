#include "Movie.h"
using namespace std;
#include <iostream>

Movie::Movie(string type, string id, string title, string genre, string duration)
    : Video(type, id, title, genre, duration) {}

void Movie::print()
{
    cout << "ID: " + id + " Title: " + title + " Genre: " + genre + " Duration: " + duration;
}