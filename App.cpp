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
    // ifstream file("videos.txt");

    // string currentLine;
    // // DO ACTUAL READING
    // if (file.is_open())
    // {
    //     // go throught the file and read line by line
    //     while (getline(file, currentLine))
    //     {
    //         string source = currentLine;
    //         string delimeter = ",";
    //         vector<string> parts = OOPUtils::split(source, delimeter);
    //         string part;

    //         if (parts[0] == "p")
    //         {
    //             Movie *mov = new Movie(
    //                 parts[0], // type
    //                 parts[1], // id
    //                 parts[2], // title
    //                 parts[4], // genre
    //                 parts[3]  // duration
    //             );
    //             catalog.push_back(mov);
    //         }
    //         else if (parts[0] == "c")
    //         {
    //             Chapter *chap = new Chapter(
    //                 parts[0], // type
    //                 parts[1], // id
    //                 parts[2], // title
    //                 parts[3], // duration
    //                 parts[4], // genre
    //                 parts[5], // serieTITLE
    //                 parts[6]  // episodeNumber
    //             );
    //             catalog.push_back(chap);
    //         }
    //     }
    //     file.close();
    // }
    // else
    // {
    //     cerr << "FATAL AND TERRIBLE ERROR OPENING FILE!" << endl;
    // }
    // for (Video *video : catalog)
    // {
    //     video->print();
    // }
    // for (Video *video : catalog)
    // {
    //     delete video;
    // }
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
