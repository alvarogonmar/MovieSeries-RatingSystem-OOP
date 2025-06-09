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

double Video::getAverage()
{
    if (qualifications.empty())
        return -1;
    double sum = 0.0;
    for (int score : qualifications)
    {
        sum += score;
    }
    return sum / qualifications.size(); // ChatGPT me ayudo a hacer este if,
                                        // donde checa si el vector quealifications esta vacio, si si, retorna - 1
}

string Video::getType() { return type; }
string Video::getGenre() { return genre; }
string Video::getId() { return id; }
string Video::getTitle() { return title; }
string Video::getDuration() { return duration; }