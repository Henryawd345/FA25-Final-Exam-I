#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

void printInRange(const map<string, int> &traffic, int low, int high){
    cout << "Airports with traffic in range [" << low << ", " << high << "]:\n";
    for (const auto &entry : traffic){
        if (entry.second >= low && entry.second <= high){
            cout << entry.first << " " << entry.second << "\n";
        }
    }
    cout << "\n";
}


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

    int maxCount = 0;
    for (const auto &entry : traffic){
        if(entry.second > maxCount){
            maxCount = entry.second;
        }
    } 

    cout << "Busiest airport with count " << maxCount << ":\n";
        for (auto &entry : traffic){
            if (entry.second == maxCount){
                cout << entry.first << " " << entry.second << "\n";

            }
        }
    return 0;
}