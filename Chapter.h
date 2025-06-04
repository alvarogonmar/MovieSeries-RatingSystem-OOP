#include "Video.h"
using namespace std;
#include <iostream>

class Chapter : public Video
{
protected:
    int episodeNumber;
    string serieTitle;

public:
    Chapter(string type, string id, string title, string genre, int duration, int episodeNumber, string serieTitle);
    int getEpisodeNumber();
    string getSerieTitle();
};