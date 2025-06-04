#pragma once
#include <iostream>
using namespace std;

class Video
{
protected:
    string type, id, title, genre;
    int duration;
    vector<int> qualifications;

public:
    Video(string type, string id, string title, string genre, int duration);
    double addScore(double score);
    double getAverage();
    string getGenre();
    string getId();
    string getTitle();
    double getDuration();
};