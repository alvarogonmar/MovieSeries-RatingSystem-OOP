#include <fstream>
#include "Video.h"
#include "Movie.h"
#include "Chapter.h"
#include "OOPUtils.h"
#include "Functions.h"

void loadCatalog(vector<Video *> &catalog)
{
    ifstream file("videos1.txt");

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

    // for (Video *video : catalog)
    // {
    //     cout << string(100, '-') << endl;
    //     video->print();
    // }
    for (Video *video : catalog)
    {
        cout << string(100, '-') << endl;
        if (video->getType() == "p")
        {
            cout << *(static_cast<Movie *>(video)) << endl;
        }
        else if (video->getType() == "c")
        {
            cout << *(static_cast<Chapter *>(video)) << endl;
        }
    }
}

void addScore(vector<Video *> &catalog)
{
    string id;
    cout << string(100, '-') << endl;
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
            cout << string(100, '-') << endl;
            return;
        }
    }
    cout << "No video found with that ID." << endl;
    cout << string(100, '-') << endl;
}

void askMinimumScore(vector<Video *> &catalog)
{
    int userOption = 0;
    do
    {

        cout << string(100, '-') << endl;
        cout << "Select an Option:" << endl;
        cout << "1. Movies\n2. Series\n3. All (movies and series)\nSelect an option: ";
        cin >> userOption;
    } while (userOption < 1 || userOption > 3);

    double score = 0;
    cout << string(100, '-') << endl;
    cout << "Minimum Score: ";
    cin >> score;
    for (Video *video : catalog)
    {

        double avg = video->getAverage(); // Jalar la calificacion y guardarla en la variable avg
        if (score <= avg)
        {

            if (userOption == 1 && video->getType() == "p")
            {
                // movies
                video->printByScore();
            }
            else if (userOption == 2 && video->getType() == "c")
            {
                // Series
                video->printByScore();
            }
            else if (userOption == 3)
            {
                // Ambos
                video->printByScore();
            }
        }
    }
    cout << string(100, '-') << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void askByGenre(vector<Video *> &catalog)
{
    int userOption = 0;
    do
    {

        cout << string(100, '-') << endl;
        cout << "Select an Option:" << endl;
        cout << "1. Movies\n2. Series\n3. All (movies and series)\nSelect an option: ";
        cin >> userOption;
    } while (userOption < 1 || userOption > 3);

    // double score = 0;
    string genreToSearch;
    cout << "Genre: ";
    cin.ignore();
    getline(cin, genreToSearch);
    for (Video *video : catalog)
    {
        string genreSaved = video->getGenre(); // Jalar el genero y guardarla en la variable genreSaved

        if (userOption == 1 && video->getGenre() == genreToSearch)
        {
            // movies
            video->printByGenre();
        }
        else if (userOption == 2 && video->getGenre() == genreToSearch)
        {
            // Series
            video->printByGenre();
        }
        else if (userOption == 3 && video->getGenre() == genreToSearch)
        {
            // Ambos
            video->printByGenre();
        }
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}