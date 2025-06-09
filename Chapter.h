#include "Video.h"
using namespace std;
#include <iostream>

class Chapter : public Video
{
protected:
    string episodeNumber;
    string serieTitle;

public:
    Chapter(string type, string id, string title, string genre, string duration, string episodeNumber, string serieTitle);
    void print() override;
    void printByScore() override;
    void printByGenre() override;

    string getEpisodeNumber();
    string getSerieTitle();
};