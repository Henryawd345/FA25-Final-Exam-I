#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main () {
    map<string, int> traffic;

    ifstream fin("210-final-1-FA25.txt");
    if (!fin)
    {
        cout << "Error opening file.\n";
        return 1;
    }
    



    return 0;
}