#include <auby.hh>

// just like curly eureka!
namespace ModUtils
{
    CCSprite* createSprite(const char* name);
    CCMenuItemSpriteExtra* createButton(CCNode* sprite, CCNode* obj, SEL_MenuHandler callback);

    const CCPoint getCenterPoint();

    void createAlert(const char* title, std::string desc, const char* btn);
}