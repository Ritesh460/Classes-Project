#include <iostream>
#include "music.h"
using namespace std;
music::music() { //default
  strcpy(artist, "");
  strcpy(publisher, "");
  duration = 0;
}
//parametrized
music::music(const char* t, int y, const char* art, const char* pub, int d) : media(t,y){
  strncpy(artist, art, 99);
  strncpy(publisher, pub, 99);
  duration = d;
}
//destructor
music::~music() {
//oooo
}
//these get artist and publisher and duration
const char* music::getArtist() const {
  return artist;
}

const char* music::getPublisher() const {
  return publisher;
}

int music::getDuration() const {
  return duration;
}
//print constructor
void music::print() const {
  cout << "Song: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Artist: " << artist << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Duration: " << duration << endl;
}


