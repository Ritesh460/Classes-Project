#include <iostream>
#include "media.h"
using namespace std;

media::media() {
  title;
  year = 0;
  publisher;
  rating = 0;
  artist;
  duration = 0;
  director;
}

char media::getTitle() {
  return title;
}

int media::getYear() {
  return year;
}

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

