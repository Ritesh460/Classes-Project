#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <vector>
#include "media.h"
using namespace std;
//got from parent media and created new variables artist, publisher, duration
class music : public media {
 private:
  char artist[100];
  char publisher[100];
  int duration;
 public: //constructors
  music();
  music(const char* t, int y, const char* art, const char* pub, int d);
  ~music();

  const char* getArtist() const;
  const char* getPublisher() const;
  int getDuration() const;
  
  virtual void print() const;
};

#endif
