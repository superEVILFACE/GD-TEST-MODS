#include <auby.hh>

namespace
{

    void $(MenuLayer::onMoreGames)(void* self, CCObject*)
    {
        FLAlertLayer::create("Not Geode???", "Hello from my custom mod!", "OK")->show(); 
    }

}