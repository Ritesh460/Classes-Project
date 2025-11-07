#include <iostream>
#include "movies.h"
using namespace std;

movie::movie() {
  title;
  artist;
  year = 0;
  duration = 0;
  publisher;
}

char movie::getTitle() {
  return title;
}

char movie::getArtist() {
  return artist;
}

int movie::getYear() {
  return year;
}

int movie::getDuration() {
  return duration;
}

char movie::getPublisher() {
  return publisher;
}

