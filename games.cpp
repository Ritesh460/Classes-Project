#include <iostream>
#include "games.h"
using namespace std;

game::game() { //default
  strcpy(publisher, "");
  rating = 0;
}
//parametrized
game::game(const char* t, int y, const char* pub, int r) : media(t,y) {
  strncpy(publisher, pub, 99);
  publisher[99] = '\0';
  rating = r;
}

game::~game() { //destructor
//cleanup if needed
}
//these get publisher and rating
const char* game::getPublisher() const { 
  return publisher;
}

int game::getRating() const {
  return rating;
}
//print constructor
void game::print() const {
  cout << "Video Game: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
}
