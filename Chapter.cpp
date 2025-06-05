#include "Chapter.h"
using namespace std;
#include <iostream>

Chapter::Chapter(string type, string id, string title, string genre, string duration, string episodeNumber, string serieTitle)
    : Video(type, id, title, genre, duration), episodeNumber(episodeNumber), serieTitle(serieTitle) {}

string Chapter::getSerieTitle() { return serieTitle; }
string Chapter::getEpisodeNumber() { return episodeNumber; }