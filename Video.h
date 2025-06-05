#pragma once
#include <iostream>
using namespace std;

class Video
{
protected:
    string type, id, title, genre, duration;
    vector<int> qualifications;

public:
    Video(string type, string id, string title, string genre, string duration);
    double addScore(double score);
    virtual void print() = 0;
    double getAverage();
    string getGenre();
    string getId();
    string getTitle();
    string getDuration();
};