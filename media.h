#include <iostream>
#include <cstring>
using namespace std;

class media {
  public:
    media();
    char[300] getTitle();
    int getYear();
    char[300] getPublisher();
    int getRating();
    char[300] getArtist();
    int getDuration();
    char[300] getDirector();
    char[300] title;
    int year;
    char[300] publisher;
    int rating;
    char[300] artist;
    int duration;
    char[300] director;
};
