#include <auby.hh>

namespace
{

    bool $(MenuLayer::init)(MenuLayer* self)
    {
        $orig(self);

        auto btn = CCSprite::createWithSpriteFrameName("pathIcon_10_001.png");
        self->addChild(btn);

        return true;
    }

}