#include <auby.hh>

ButtonSprite* ButtonSprite::create(
    const char* caption,
    int width,
    bool absolute,
    const char* font,
    const char* texture,
    float height,
    float scale
) {
    return ButtonSprite::create(caption, width, 0, scale, absolute, font, texture, height);
}

static FLAlertLayer* FLAlertLayer::create(const char* title, const gd::string& desc, const char* btn)
{
    FLAlertLayer::create(nullptr, title, desc, btn, nullptr, 300.0);
}
