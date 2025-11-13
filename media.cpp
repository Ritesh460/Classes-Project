#include <iostream>
#include "media.h"
#include <cstring>
using namespace std;

media::media() {
  strcpy(title,"");
  year = 0;
}

media::media(const char* t, int y) {
  strncpy(title, t, 299);
  title[299] = '\0';
  year = y;
}

media::~media() {}

const char* media::getTitle() const {
  return title;
}

int media::getYear() const {
  return year;
}
/*
char media::getPublisher() {
  return publisher;
}

int media::getRating() {
  return rating;
}

char media::getArtist() {
  return artist;
}

int media::getDuration() {
  return duration;
}

char media::getDirector() {
  return director;
}
*/
