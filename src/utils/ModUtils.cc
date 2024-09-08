#include "ModUtils.hh"

// just like curly eureka!
namespace ModUtils
{
    CCSprite* createSprite(const char* name)
    {
        auto sprite = CCSprite::createWithSpriteFrameName(name);
        if (!sprite) sprite = CCSprite::create(name);
        if (sprite) return sprite;
    }

    const CCPoint getCenterPoint()
    {
        return CCDirector::sharedDirector()->getWinSize() / 2;
    }
}