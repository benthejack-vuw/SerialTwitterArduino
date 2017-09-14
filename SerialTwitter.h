#include <Arduino.h>
#include <OWL.h>

class SerialTwitter{
  public:
    SerialTwitter(int statusPin);
    void connect();
    void print(String text);
    void println(String text);
    int  tweetsWith(String text);
    void watchForTweetsWith(String text);
    OWLCommand pollForWatchedTweets();
    void tweet(String text);
  private:
    OWL _owl;
};
