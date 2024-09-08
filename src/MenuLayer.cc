#include <auby.hh>

namespace
{

    void* $(MenuLayer::onMoreGames)(MenuLayer* self, CCObject*)
    {
        FLAlertLayer::create(nullptr, "Not Geode???", "Hello from my custom iOS mod!", "OK", nullptr, 300.0)->show();
    }

}