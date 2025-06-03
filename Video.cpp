#include "Video.h"
#include <iostream>
#include <numeric>
using namespace std;

Video::Video(string type, string id, string title, string genre, int duration) : type(type), id(id), title(title), genre(genre), duration(duration) {}

string Video::showAllVideosScore()
{
}

double Video::addScore(int score) { qualifications.push_back(score); }
double Video::getAverage()
{
    if (qualifications.empty())
        return -1;
    double sum = 0.0;
    for (int score : qualifications)
    {
        sum += score;
    }
    return sum / qualifications.size();
}
string Video::getGenre()
{
    return genre;
}