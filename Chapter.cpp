#include "Chapter.h"
using namespace std;
#include <iostream>

Chapter::Chapter(string type, string id, string title, string duration, string genre, string serieTitle, string episodeNumber)
    : Video(type, id, title, genre, duration), serieTitle(serieTitle), episodeNumber(episodeNumber) {}

ostream &operator<<(ostream &os, const Chapter &chapter)
{
    os << "ID: " << chapter.id << "|Chapter Title: " << chapter.title << "|Genre: " << chapter.genre << "|Duration: "
       << chapter.duration << " mins" << "|Serie Title: " << chapter.serieTitle << "|Episode Number: " << chapter.episodeNumber << "|Rating: ";
    double score = chapter.getAverage();
    if (score < 0)
        os << "SC";
    else
        os << score;
    return os;
}

void Chapter::printByScore()
{
    cout << "ID: " + id + "|Chapter Title: " + title + "|Serie Title: " + serieTitle +
                "|Episode Number: " + episodeNumber + "|Rating: ";
    double score = getAverage();
    if (score < 0)
    {
        cout << "SC";
    }
    else
    {
        cout << score << endl;
    }
    cout << endl;
}
void Chapter::printByGenre()
{
    cout << "ID: " + id + "|Chapter Title: " + title + "|Serie Title: " + serieTitle +
                "|Episode Number: " + episodeNumber + "|Genre: " + genre + "|Rating: ";
    double score = getAverage();
    if (score < 0)
    {
        cout << "SC";
    }
    else
    {
        cout << score << endl;
    }
    cout << endl;
}

string Chapter::getSerieTitle() const { return serieTitle; }
string Chapter::getEpisodeNumber() const { return episodeNumber; }