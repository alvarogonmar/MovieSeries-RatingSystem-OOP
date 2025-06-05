#include "Chapter.h"
using namespace std;
#include <iostream>

Chapter::Chapter(string type, string id, string title, string duration, string genre, string serieTitle, string episodeNumber)
    : Video(type, id, title, genre, duration), serieTitle(serieTitle), episodeNumber(episodeNumber) {}

void Chapter::print()
{
    cout << "ID: " + id + "|Chapter Title: " + title + "|Genre: " + genre + "|Duration: " + duration + " mins |Serie Title: " + serieTitle +
                "|Episode Number: " + episodeNumber
         << endl;
}

string Chapter::getSerieTitle() { return serieTitle; }
string Chapter::getEpisodeNumber() { return episodeNumber; }