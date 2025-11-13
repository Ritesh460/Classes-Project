#include <iostream>
#include <vector>
#include "media.h"
#include <cstring>
using namespace std;

class game : public media {
  private:
   char publisher[100];
   int rating;
  public:
   game();
   game(const char* t, int y, const char* pub, int r);
   ~game();

   const char* getPublisher() const;
   int getRating() const;
};

