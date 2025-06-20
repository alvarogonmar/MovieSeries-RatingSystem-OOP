#include "Video.h"
using namespace std;
#include <iostream>

class Movie : public Video
{
public:
    Movie(string type, string id, string title, string genre, string duration);
    void printByScore() override;
    void printByGenre() override;
    friend ostream &operator<<(ostream &os, const Movie &movie);
};