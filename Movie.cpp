#include "Movie.h"
using namespace std;
#include <iostream>

Movie::Movie(string type, string id, string title, string genre, int duration)
    : Video(type, id, title, genre, duration) {}
