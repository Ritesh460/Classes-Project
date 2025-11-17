#include <iostream>
#include "movies.h"
using namespace std;

movie::movie() {  //default
  strcpy(director, "");
  duration = 0;
  rating = 0;
}
//parametrized
movie::movie(const char* t, int y, const char* dir, int d, int r) : media(t,y) {
  strncpy(director, dir, 99);
  director[99] = '\0';
  duration = d;
  rating = r;
}

movie::~movie() { //destructor
//cleanup if needed
}
//these get director, duration, and rating
const char* movie::getDirector() const{
  return director;
}

int movie::getDuration() const{
  return duration;
}

int movie::getRating() const{
  return rating;
}
//print constructor
void movie::print() const {
  cout << "Movie: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Director: " << director << endl;
  cout << "Duration: " << duration << endl;
  cout << "Rating: " << rating << endl;
}

