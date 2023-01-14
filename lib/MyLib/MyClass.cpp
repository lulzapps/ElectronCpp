#include <boost/format.hpp>

#include "MyClass.h"

namespace app
{

MyClass::MyClass(const std::string& text)
    : _text{text}
{
}

std::string MyClass::appendIt(const std::string& extra) const
{
    return _text + " " + extra;
}

std::string MyClass::text() const
{
    return _text;
}

std::string MyClass::addText(std::uint32_t x, std::uint32_t y) const
{
    return (boost::format("Adding %1% + %2%  = %3%") % x % y % (x+y)).str();
}

}
