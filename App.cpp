#include <iostream>
#include <fstream>
#include "Video.h"
#include "Movie.h"
#include "Chapter.h"
#include "OOPUtils.h"
#include "Functions.h"
using namespace std;

// vector<Video *> catalog;
int main()
{
    vector<Video *> catalog;

    int userOption = 0;

    do
    {
        cout << "Choose an option from Menu!" << endl;
        cout << "1. Show all catalog with ratings\n2. Rate a video\n3. Show movies or episodes with a minimum average rating\n4. Show movies or episodes by genre\n9. Exit\nSelect an option: ";
        cin >> userOption;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (userOption == 1)
        {
            showCatalog(catalog);
        }
    } while (userOption != 9);
    cout << "Goodbye!" << endl;
    return 0;
}
