#include <iostream>
#include "movies.h"
using namespace std;

movie::movie() {
  strcpy(director, "");
  duration = 0;
  rating = 0;
}

movie::movie(const char* t, int y, const char* pub, int r) {
  strncpy(director, dir, 99);
  director[99] = '\0'
  duration = d;
  rating = r;
}

movie::~movie() {
//oooo
}

const char* movie::getDirector() {
  return director;
}

int movie::getDuration() const{
  return duration;
}

int movie::getRating() const{
  return rating;
}

void movie::print() const {
  cout << "Movie: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Director: " << director << endl;
  cout << "Duration: " << duration << endl;
  cout << "Rating: " << rating << endl;
}

