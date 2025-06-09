#include <fstream>
#include "Video.h"
#include "Movie.h"
#include "Chapter.h"
#include "OOPUtils.h"
#include "Functions.h"

void loadCatalog(vector<Video *> &catalog)
{
    ifstream file("videos.txt");

    string currentLine;
    // DO ACTUAL READING
    if (file.is_open())
    {
        // go throught the file and read line by line
        while (getline(file, currentLine))
        {
            string source = currentLine;
            string delimeter = ",";
            vector<string> parts = OOPUtils::split(source, delimeter);
            string part;

            if (parts[0] == "p")
            {
                Movie *mov = new Movie(
                    parts[0], // type
                    parts[1], // id
                    parts[2], // title
                    parts[4], // genre
                    parts[3]  // duration
                );
                catalog.push_back(mov);
            }
            else if (parts[0] == "c")
            {
                Chapter *chap = new Chapter(
                    parts[0], // type
                    parts[1], // id
                    parts[2], // title
                    parts[3], // duration
                    parts[4], // genre
                    parts[5], // serieTITLE
                    parts[6]  // episodeNumber
                );
                catalog.push_back(chap);
            }
        }
        file.close();
    }
    else
    {
        cout << "FATAL AND TERRIBLE ERROR OPENING FILE!" << endl;
    }
}

void showCatalog(vector<Video *> &catalog)
{

    for (Video *video : catalog)
    {
        cout << string(100, '-') << endl;
        video->print();
    }
}

void addScore(vector<Video *> &catalog)
{
    string id;
    cout << "Please entern an ID: ";
    getline(cin, id);

    for (Video *video : catalog)
    {
        if (video->getId() == id)
        {
            double score;
            do
            {
                cout << "Enter rating (1-5): ";
                cin >> score;
                if (score < 1 || score > 5)
                    cout << "Please enter a value between 1 and 5.\n";
            } while (score < 1 || score > 5);

            video->addScore(score);
            cout << "Score added!" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return;
        }
    }
    cout << "No video found with that ID." << endl;
}

void askMinimumScore()
{
    int userOption = 0;
    cout << "Select an Option:" << endl;
    cout << "1. Movies\n2. Series\n3. All (movies and series)\nnSelect an option: ";
    cin >> userOption;
    if (userOption == 1)
    {
    }
    else if (condition)
    {
        /* code */
    }
    else if (condition)
    {
        /* code */
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}