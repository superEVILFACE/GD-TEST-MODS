#include <auby.hh>

namespace
{

    void* $(MenuLayer::onMoreGames)(MenuLayer* self, CCObject*)
    {
        FLAlertLayer::create("Not Geode???", "Hello from my custom iOS mod!", "OK")->show();
    }

}