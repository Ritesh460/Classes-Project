#include <iostream>
#include <cstring>
using namespace std;

class media {
  protected:
    char title[300];
    int year;    
  public:
    media();
    media(const char* t, int y);
    virtual ~media();
    const char* getTitle() const;
    int getYear() const;
};
