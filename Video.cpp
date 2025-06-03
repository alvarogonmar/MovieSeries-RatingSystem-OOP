#include "Video.h"
#include <iostream>
#include <fstream>
#include <numeric>
using namespace std;

Video::Video(string type, string id, string title, string genre, int duration) : type(type), id(id), title(title), genre(genre), duration(duration) {}

string Video::showAllVideosScore()
{
    ifstream file("videos.txt");
    string currentLine;
    if (file.is_open())
    {
        cout << "Movies and Series with Qualifications" << endl;
        // go throught the file and read line by line
        while (getline(file, currentLine))
        {
            cout << currentLine.substr(1) << endl;
        };
        file.close();
    }
    else
    {
        cerr << "FATAL AND TERRIBLE ERROR OPENING FILE!" << endl;
    }
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