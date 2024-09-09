#include <auby.hh>
#include "utils/ModUtils.hh"

namespace
{

    bool $(MenuLayer::init)(MenuLayer* self)
    {
        $orig(self);

        auto spr = ModUtils::createSprite("pathIcon_10_001.png");
        auto btn = CCMenuItemSpriteExtra::create(spr, spr, self, menu_selector(MenuLayer::onMoreGames));
        btn->setPosition(ModUtils::getCenterPoint());
        
        auto menu = CCMenu::create();
        self->addChild(menu);
        menu->addChild(btn);

        return true;
    }

    void* $(MenuLayer::onMoreGames)(MenuLayer* self, CCObject*)
    {
        ModUtils::createAlert("Not Geode???", "Hello from my custom iOS mod!", "OK");
    }

}