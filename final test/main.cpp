#include "person.hpp"
#include <fstream>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

vector<Person> makeDatabase();
void showDatabase(vector<Person> db);
void printYoungPeople(vector<Person>& db);

int main() {
    vector<Person> db = makeDatabase();
    showDatabase(db);
    printYoungPeople(db);
    
    return 0;
}

vector<Person> makeDatabase() {
    vector<Person> database;
    const string filepath = "/Users/vanderleijunior/Desktop/csci-01/final test/pringfieldPeople.txt";
    ifstream file(filepath);

    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filepath << endl;
        return database;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string idStr, name, ageStr;

        if (getline(ss, idStr, ',') && getline(ss, name, ',') && getline(ss, ageStr, ',')) {
            int id = stoi(idStr);
            int age = stoi(ageStr);
            database.emplace_back(id, name, age);
        }
    }
    file.close();
    return database;
}

void showDatabase(vector<Person> db) {
    for (const auto &person : db) {
        cout << person.toString() << endl;
    }
}

void printYoungPeople(vector<Person>& db) {
    double medianAge = 0;
    size_t size = db.size();
    
    int totalAge = 0;
    for (const auto &person : db) {
        totalAge += person.getAge();
    }

    medianAge = totalAge / (double)size;

    cout << "\nPeople younger than the avarage age (" << medianAge << "):\n";
    for (const auto &person : db) {
        if (person.getAge() < medianAge) {
            cout << person.toString() << endl;
        }
    }
}
