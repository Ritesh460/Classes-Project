#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <vector>
#include "media.h"
#include <cstring>
using namespace std;
//got from parent media and created new variables director, duration, rating
class movie : public media {
 private:
  char director[100];
  int duration;
  int rating;
 public: //constructors
  movie();
  movie(const char* t, int y, const char* dir, int d, int r);
  ~movie();

  const char* getDirector() const;
  int getDuration() const;
  int getRating() const;

  virtual void print() const;

};

#endif
