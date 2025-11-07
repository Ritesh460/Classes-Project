#include <iostream>
#include "media.h"
using namespace std;

class movie : public media {
 public:
  movie();
  getTitle();
  getArtist();
  getYear();
  getDuration();
  getPublisher();
};
