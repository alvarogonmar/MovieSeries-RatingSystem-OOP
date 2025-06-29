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
    void printByScore() override;
    void printByGenre() override;

    string getEpisodeNumber() const;
    string getSerieTitle() const;
    friend ostream &operator<<(ostream &os, const Chapter &chapter); // Aqui tilice GitHub Copilot, al poner solamente  de ostream para adelante me marcaba error en
    // " &operator" por lo que le pregunte y me dijo que tenia que poner el friend para que pudiera acceder a los datos privados o protegidos de Chapter
};