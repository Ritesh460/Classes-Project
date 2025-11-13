#include <iostream>
#include <vector>
#include "media.h"
using namespace std;

class music : public media {
 private:
  char artist[100];
  char publisher[100];
  int duration;
 public:
  music();
  music(const char* t, int y, const char* art, const char* pub, int d);
  ~music();

  const char* getArtist() const;
  const char* getPublisher() const;
  int getDuration() const;
  
}
