#pragma once
#include <string>

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
