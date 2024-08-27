#pragma once
#include <string>


class Item
{
public:
    Item();
    ~Item() = default;

    std::string ShowDescription();
    
private:
    std::string description;
    
};
