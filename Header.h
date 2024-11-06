#ifndef Header_h
#define Header_h

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

void ToString(double num, int precision) {
    stringstream stream;
    stream << fixed << setprecision(precision) << num;
    string str = stream.str();
    cout << str << endl;
}

#endif
