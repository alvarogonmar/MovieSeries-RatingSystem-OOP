#pragma once
#include <iostream>
using namespace std;

class Video
{
protected:
    string type, id, title, genre, duration;
    vector<double> qualifications;

public:
    Video(string type, string id, string title, string genre, string duration);
    void addScore(double score);

    virtual void print() = 0;
    virtual void printByScore() = 0;
    virtual void printByGenre() = 0;

    virtual ~Video() {} // destructor
    double getAverage();
    // friend ostream& operator<<(ostream& os, const Video& video);

    string getType();
    string getGenre();
    string getId();
    string getTitle();
    string getDuration();
};