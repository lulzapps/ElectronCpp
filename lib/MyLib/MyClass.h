#pragma once
#include <string>

#include <napi.h>

namespace example
{
    // add number function
    int add(int x, int y);

    // add function wrapper
    Napi::Number addWrapped(const Napi::CallbackInfo &info);

    // Export API
    Napi::Object Init(Napi::Env env, Napi::Object exports);
    NODE_API_MODULE(addon, Init)
}


namespace app
{

class MyClass
{
    std::string _text;

public:
    explicit MyClass(const std::string& text);

    std::string appendIt(const std::string& extra) const;
    std::string text() const;

    std::string addText(std::uint32_t x, std::uint32_t y) const;
};

}
