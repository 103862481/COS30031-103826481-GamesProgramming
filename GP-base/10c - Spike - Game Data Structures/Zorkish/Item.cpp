#include "Item.h"

Item::Item()
{
    description = "This is a sacred item that may be useful on your quest!";
}

std::string Item::ShowDescription()
{
    return description;
}