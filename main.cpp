#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main () {
    map<string, int> traffic;

    ifstream fin("210-final-1-FA25.txt");
    if (!fin){
        cout << "Error opening file.\n";
        return 1;
    }
    
    string origin;
    string dest;

    while (fin >> origin >> dest){
        traffic[origin]++;
        traffic[dest]++;
    }
    
    cout << "All airport traffic counts:\n";
    for (const auto &entry : traffic){
        cout << entry.first << " " << entry.second << "\n";
    }
    


    return 0;
}