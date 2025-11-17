#include <iostream>
#include "media.h"
#include <cstring>
using namespace std;

media::media() { //default constructor
  strcpy(title,"");
  year = 0;
}

media::media(const char* t, int y) { //parameterized constructor
  strncpy(title, t, 299);
  title[299] = '\0';
  year = y;
}

media::~media() {} //destructor

const char* media::getTitle() const { //gets the title from media
  return title;
}

int media::getYear() const { //gets the year from media
  return year;
}

