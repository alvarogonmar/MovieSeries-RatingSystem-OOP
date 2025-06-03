#pragma once
#include <iostream>
using namespace std;

class Video
{
private:
    string type, id, title, genre;
    int duration;
    vector<int> qualifications;

public:
    Video(string type, string id, string title, string genre, int duration);
    string showAllVideosScore();
    double addScore();
    double getAverage();
    string getGenre();
};