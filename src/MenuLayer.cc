#include <auby.hh>

namespace
{

    bool $(MenuLayer::init)(MenuLayer* self)
    {
        $orig(self);

        auto myButton = CCMenuItemSpriteExtra::create(
			CCSprite::createWithSpriteFrameName("pathIcon_10_001.png"),
			self,
			/**
			 * Here we use the name we set earlier for our modify class.
			*/
			menu_selector($(MenuLayer::onPlay))
		);

        auto menu = CCMenu::create();
        self->addChild(menu);
        menu->setPosition({125, 100});
        menu->addChild(myButton);

        return true;
    }

}