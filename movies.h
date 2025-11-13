#include <iostream>
#include <vector>
#include "media.h"
#include <cstring>
using namespace std;

class movie : public media {
 private:
  char director[100];
  int duration;
  int rating;
 public:
  movie();
  movie(const char* t, int y, const char* dir, int d, int r);
  ~movie();

  const char* getDirector() const;
  int getDuration() const;
  int getRating() const;

};
