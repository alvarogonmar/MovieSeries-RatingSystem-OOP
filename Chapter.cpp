#include "Chapter.h"
using namespace std;
#include <iostream>

Chapter::Chapter(string type, string id, string title, string genre, string duration, string episodeNumber, string serieTitle)
    : Video(type, id, title, genre, duration), episodeNumber(episodeNumber), serieTitle(serieTitle) {}

void Chapter::print()
{
    cout << "ID: " + id + " Title: " + title + " Genre: " + genre + " Duration: " + duration + "Serie Title: " + serieTitle +
                " Episode Number: " + episodeNumber;
}

string Chapter::getSerieTitle() { return serieTitle; }
string Chapter::getEpisodeNumber() { return episodeNumber; }