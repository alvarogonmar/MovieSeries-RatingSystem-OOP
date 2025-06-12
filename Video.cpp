#include "Video.h"
#include <iostream>
#include <fstream>
#include <numeric>
using namespace std;

Video::Video(string type, string id, string title, string genre, string duration) : type(type), id(id), title(title), genre(genre), duration(duration) {}

void Video::addScore(double score)
{
    qualifications.push_back(score);
}

double Video::getAverage() const
{
    if (qualifications.empty())
        return -1;
    double sum = 0.0;
    for (double score : qualifications)
    {
        sum += score;
    }
    return sum / qualifications.size(); // ChatGPT me ayudo a hacer este if,
                                        // donde checa si el vector quealifications esta vacio, si si, retorna - 1
}

string Video::getType() const { return type; }
string Video::getGenre() const { return genre; }
string Video::getId() const { return id; }
string Video::getTitle() const { return title; }
string Video::getDuration() const { return duration; }