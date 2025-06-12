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

    virtual void printByScore() = 0;
    virtual void printByGenre() = 0;

    virtual ~Video() {} // destructor
    double getAverage() const;

    string getType() const;
    string getGenre() const;
    string getId() const;
    string getTitle() const;
    string getDuration() const;
};