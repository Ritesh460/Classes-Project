#include <iostream>
#include <vector>
#include <cstring>

#include "media.h"
#include "music.h"
#include "movies.h"
#include "games.h"
using namespace std;
//function prototypes
void addMedia(vector<media*>& db);
void searchMedia(vector<media*>& db);
void deleteMedia(vector<media*>& db);

int main() {
    //vector storage, input command, and bool for running	
    vector<media*> database;
    char command[20];
    bool running = true; 

    cout << "Welcome to the Digital Media Database!" << endl;
    //while loop for options
    while (running) {
        cout << "\nEnter command (ADD, SEARCH, DELETE, QUIT): ";
        cin >> command;

        //normalize to uppercase
        for (int i = 0; command[i]; i++)
            command[i] = toupper(command[i]);

        if (strcmp(command, "ADD") == 0) {
            addMedia(database);
        }
        else if (strcmp(command, "SEARCH") == 0) {
            searchMedia(database);
        }
        else if (strcmp(command, "DELETE") == 0) {
            deleteMedia(database);
        }
        else if (strcmp(command, "QUIT") == 0) {
            running = false; // stop loop naturally
        }
        else {
            cout << "Invalid command." << endl;
        }
    }

    //clean up memory
    for (media* m : database) {
        delete m;
    }

    return 0;
}

//ADD function which adds media input based on options into vector
void addMedia(vector<media*>& db) {
    char type[20];
    cout << "Enter type (MUSIC, VIDEOGAME, MOVIE): ";
    cin >> type;
    //upper to make it easier
    for (int i = 0; type[i]; i++)
        type[i] = toupper(type[i]);

    char title[100];
    int year;
    cin.ignore();
    cout << "Title: ";
    cin.getline(title, 100);
    cout << "Year: ";
    cin >> year;
    cin.ignore();
    //MUSIC option and pushes back
    if (strcmp(type, "MUSIC") == 0) {
        char artist[100], publisher[100];
        int duration;
        cout << "Artist: ";
        cin.getline(artist, 100);
        cout << "Publisher: ";
        cin.getline(publisher, 100);
        cout << "Duration (secs): ";
        cin >> duration;
        cin.ignore();
        db.push_back(new music(title, year, artist, publisher, duration));
    }
    //GAME option and pushes backs
    else if (strcmp(type, "VIDEOGAME") == 0) {
        char publisher[100];
        float rating;
        cout << "Publisher: ";
        cin.getline(publisher, 100);
        cout << "Rating(out of 5): ";
        cin >> rating;
        cin.ignore();
        db.push_back(new game(title, year, publisher, rating));
    }
    //MOVIE option and pushes back
    else if (strcmp(type, "MOVIE") == 0) {
        char director[100];
        int duration;
        float rating;
        cout << "Director: ";
        cin.getline(director, 100);
        cout << "Duration(mins): ";
        cin >> duration;
        cout << "Rating(out of 5): ";
        cin >> rating;
        cin.ignore();
        db.push_back(new movie(title, year, director, duration, rating));
    }
    //if none of these three options
    else {
        cout << "Unknown media type." << endl;
    }
}

//SEARCH function for searching media in vector which could one to more inputs based on title and year
void searchMedia(vector<media*>& db) {
    char mode[10];
    cout << "Search by TITLE or YEAR? ";
    cin >> mode;
    //upper
    for (int i = 0; mode[i]; i++)
        mode[i] = toupper(mode[i]);

    bool found = false;
    //TITLE OPTION 
    if (strcmp(mode, "TITLE") == 0) {
        char title[100];
        cin.ignore();
        cout << "Enter title: ";
        cin.getline(title, 100);

        for (media* m : db) {
            if (strcmp(m->getTitle(), title) == 0) {
                m->print();
                cout << endl;
                found = true;
            }
        }
    }
    //YEAR Option
    else if (strcmp(mode, "YEAR") == 0) {
        int year;
        cout << "Enter year: ";
        cin >> year;

        for (media* m : db) {
            if (m->getYear() == year) {
                m->print();
                cout << endl;
                found = true;
            }
        }
    }
    //if when searching not found, results in this print
    if (!found)
        cout << "No matching media found." << endl;
}

//DELETE function which deletes media inputs based on title or year
void deleteMedia(vector<media*>& db) {
    char mode[10];
    cout << "Delete by TITLE or YEAR? ";
    cin >> mode;

    for (int i = 0; mode[i]; i++)
        mode[i] = toupper(mode[i]);
    //new vector for detecting matches
    vector<int> matches;
    //TITLE option
    if (strcmp(mode, "TITLE") == 0) {
        char title[100];
        cin.ignore();
        cout << "Enter title: ";
        cin.getline(title, 100);
        //loops through for match to title and pushes back
        for (int i = 0; i < db.size(); i++) {
            if (strcmp(db[i]->getTitle(), title) == 0)
                matches.push_back(i);
        }
    }
    //YEAR option
    else if (strcmp(mode, "YEAR") == 0) {
        int year;
        cout << "Enter year: ";
        cin >> year;
        //loops through for match to title and pushes back
        for (int i = 0; i < db.size(); i++) {
            if (db[i]->getYear() == year)
                matches.push_back(i);
        }
    }
    //if no matches, results in this
    if (matches.empty()) {
        cout << "No matches found." << endl;
        return;
    }
    //prints all of the ones you need to delete based on title or year
    for (int idx : matches)
        db[idx]->print();
    //option for deletion
    cout << "Delete these? (Y/N): ";
    char c;
    cin >> c;
    //deletes those media inputs
    if (c == 'Y' || c == 'y') {
        for (int i = matches.size() - 1; i >= 0; i--) {
            int index = matches[i];
            delete db[index];//destructor called
            db.erase(db.begin() + index);
        }
        cout << "Deleted." << endl;
    }
    //doesn't delete
    else {
        cout << "Cancelled." << endl;
    }
}
