#include "Video.h"
#include <iostream>
#include <fstream>
#include <numeric>
using namespace std;

Video::Video(string type, string id, string title, string genre, string duration) : type(type), id(id), title(title), genre(genre), duration(duration) {}

double Video::addScore(double score)
{
    qualifications.push_back(score);
    return 0;
}
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
string Video::getGenre() { return genre; }
string Video::getId() { return id; }
string Video::getTitle() { return title; }
string Video::getDuration() { return duration; }