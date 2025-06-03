#include "Video.h"
#include <iostream>
using namespace std;

Video::Video(string type, string id, string title, string genre, int duration) : type(type), id(id), title(title), genre(genre), duration(duration) {}

string Video::showAllVideosScore()
{
}

double Video::addScore() {}
double Video::getAverage() {}
string Video::getGenre() {}