#include <iostream>
#include "game.h"
using namespace std;

game::game() {
  title;
  year = 0;
  publisher;
  rating = 0;
}

char game::getTitle() {
  return title;
}

int game::getYear() {
  return year;
}

char game::getPublisher() {
  return publisher;
}

int game::getRating() {
  return rating;
}

