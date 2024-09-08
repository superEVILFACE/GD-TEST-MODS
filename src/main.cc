#include "auby/auby.hh"
#include <auby.hh>

namespace {

bool $(MenuLayer::init)(MenuLayer* self) {
    $orig(self);

    auto btn = CCSprite::createWithSpriteFrameName("pathIcon_10_001.png");

    auto menu = CCMenu::create();
    self->addChild(menu);
    menu->setPosition({125, 100});
    menu->addChild(btn);

    return true;
}
} // namespace
