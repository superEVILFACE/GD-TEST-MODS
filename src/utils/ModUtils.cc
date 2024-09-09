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

    CCMenuItemSpriteExtra* createButton(CCNode* sprite, CCNode* obj, SEL_MenuHandler callback)
    {
        return CCMenuItemSpriteExtra::create(sprite, sprite, obj, callback));
    }

    const CCPoint getCenterPoint()
    {
        return CCDirector::sharedDirector()->getWinSize() / 2;
    }

    void createAlert(const char* title, std::string desc, const char* btn)
    {
        FLAlertLayer::create(nullptr, title, desc, btn, nullptr, 300.0)->show();
    }
}