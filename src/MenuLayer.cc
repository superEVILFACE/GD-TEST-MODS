#include <auby.hh>
#include "utils/ModUtils.hh"

namespace
{

    bool $(MenuLayer::init)(MenuLayer* self)
    {
        $orig(self);

        auto spr = ModUtils::createSprite("pathIcon_10_001.png");
        spr->setPosition(ModUtils::getCenterPoint());
        self->addChild(spr);

        return true;
    }

    void* $(MenuLayer::onMoreGames)(MenuLayer* self, CCObject*)
    {
        ModUtils::createAlert("Not Geode???", "Hello from my custom iOS mod!", "OK");
    }

}