#ifndef GAMES_H
#define GAMES_H

#include <iostream>
#include <vector>
#include "media.h"
#include <cstring>
using namespace std;
//takes from parent media and makes new variables of publisher,rating
class game : public media {
  private:
   char publisher[100];
   int rating;
  public: //constructors
   game();
   game(const char* t, int y, const char* pub, int r);
   ~game();

   const char* getPublisher() const;
   int getRating() const;

   virtual void print() const;
};

#endif
