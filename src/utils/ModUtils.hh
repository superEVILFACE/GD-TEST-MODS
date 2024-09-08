#include <auby.hh>

// just like curly eureka!
namespace ModUtils
{
    CCSprite* createSprite(const char* name);
    CCSprite* createSprite(const char* name, bool IgnoreScaleFactor);
    //sd - 1.0, hd - 2.0, uhd - 4.0
    CCSprite* createSprite(const char* name, float ScaleFactor);

    const CCPoint getCenterPoint();

    void createAlert(const char* title, const std::string* desc, const char* btn);
}