#include <iostream>
#include "game.h"
using namespace std;

game::game() {
  strcpy(publisher, "");
  rating = 0;
}

game::game(const char* t, int y, const char* pub, int r) {
  strncpy(publisher, pub, 99);
  publisher[99] = '\0'
  rating = r;
}

game::~game() {
//oooo
}

const char* game::getPublisher() const {
  return publisher;
}

int game::getRating() const {
  return rating;
}
void game::print() const {
  cout << "Video Game: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
}
