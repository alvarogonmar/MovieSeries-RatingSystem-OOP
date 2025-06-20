#include <vector>
#include <iostream>
using namespace std;
#include "Video.h"

void loadCatalog(vector<Video *> &catalog);
void showCatalog(vector<Video *> &catalog);
void addScore(vector<Video *> &catalog);
void askMinimumScore(vector<Video *> &catalog);
void askByGenre(vector<Video *> &catalog);
