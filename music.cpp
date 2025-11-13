#include <iostream>
#include "music.h"
using namespace std;
music::music() {
  strcpy(artist, "");
  strcpy(publisher, "");
  duration = 0;
}

music::music() {
  strncpy(artist, art, 99);
  strncpy(publisher, pub, 99);
  duration = 0;
}

music::~music() {
//oooo
}

const char* music::getArtist() const {
  return artist;
}

const char* music::getPublisher() const {
  return publisher;
}

int music::getDuration() const {
  return duration;
}

void music::print() const {
  cout << "Song: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Artist: " << artist << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Duration: " << duration << endl;
}


