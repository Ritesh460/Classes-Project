#ifndef MEDIA_H
#define MEDIA_H //I was having a huge error with my class being redfined and it not working so I search online and in ww3 schools it talked about header guards, this comment will only be on this file but this code is used in every .h file

#include <iostream>
#include <cstring>
using namespace std;

class media {
  protected: 
    char title[300];
    int year;    
  public: //all of the constructors
    media();
    media(const char* t, int y);
    virtual ~media();
    const char* getTitle() const;
    int getYear() const;

    virtual void print() const = 0; 
};

#endif // end of the guard
