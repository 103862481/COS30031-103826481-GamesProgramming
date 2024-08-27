#include "Inventory.h"
#include <iostream>
#include "Item.h"

Inventory::Inventory()
{
}

void Inventory::AddItemToInventory(std::string a_key, Item* a_value)
{
    inventory.insert(std::make_pair(a_key, a_value));
}

void Inventory::RemoveItemInInvetory(const std::string a_value)
{
    std::map<std::string, Item*>::iterator it;
    
    for (it = inventory.begin(); it != inventory.end(); ++it)
    {
        if (it->first == a_value)
        {
            inventory.erase(it);
            return;
        }
    }
}

void Inventory::ShowInventory()
{
    if (inventory.empty())
    {
        std::cout << "Inventory is empty!" << "\n";
        return;
    }
    
    for (auto const& item: inventory)
    {
        Item* chosenItem = item.second;
        std::cout << "Item Key: " << item.first << "\n";
        std::cout << "Item description: " << chosenItem->ShowDescription() << "\n";
    }
}

std::map<std::string, Item*> Inventory::GetInventory()
{
    return inventory;
}
