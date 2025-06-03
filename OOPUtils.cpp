#include "OOPUtils.h"
void OOPUtils::staticTest()
{
    cout << "DOING STUFF IN A STATIC METHOD!" << endl;
};
void OOPUtils::cleanCin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // sirve para limpiar la memoria del buffer
};

// receive a string, breal it apart using the delimiter as a breakpoint, return a vector with the parts.
vector<string> OOPUtils::split(const string &source, const string &delimiter)
{
    vector<string> result;

    // go through the string search for location of delimiter and substring (create a string that is a part of another string)
    int start = 0;
    int end;

    // // there is a find method withiin the string that return the location of a string

    // int pos = source.find(delimiter);

    // if (pos == string::npos)
    // {
    //     cout << "STRING NOT FOUND" << endl;
    // }
    // else
    // {
    //     cout << "String found at position: " << pos << endl;
    // }

    // what we need to do is serche for the indexes
    end = source.find(delimiter);
    while (end != string::npos)
    {
        // get slice
        string part = source.substr(start, end - start);

        // save slice
        result.push_back(part);

        // we need a new start
        start = end + delimiter.length();

        // search for new end position
        end = source.find(delimiter, start);
    }
    // add the last part
    result.push_back(source.substr(start));
    return result;
};