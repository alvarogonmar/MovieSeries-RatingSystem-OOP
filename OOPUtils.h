#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class OOPUtils
{
public:
    static void staticTest();
    static void cleanCin();
    // 2 ways to send a value throught an argument
    // copy or reference
    static vector<string> split(const string &source, const string &delimiter);
};
