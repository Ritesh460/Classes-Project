#include <iostream>
#include <vector>
#include "media.h"
using namespace std;

class game : public media {
  public:
   game();
   getTitle();
   getYear();
   getPublisher();
   getRating();
};

