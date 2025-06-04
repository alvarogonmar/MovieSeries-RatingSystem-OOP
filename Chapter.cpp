#include "Chapter.h"
using namespace std;
#include <iostream>

Chapter::Chapter(string type, string id, string title, string genre, int duration, int episodeNumber, string serieTitle)
    : Video(type, id, title, genre, duration), episodeNumber(episodeNumber), serieTitle(serieTitle) {}