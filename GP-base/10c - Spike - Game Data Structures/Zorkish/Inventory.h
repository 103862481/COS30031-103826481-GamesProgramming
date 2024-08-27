#pragma once
#include <map>
#include <string>

class Item;

class Inventory
{
public:

    Inventory();
    ~Inventory() = default;
    
    void AddItemToInventory(std::string a_key, Item* a_value);

    void RemoveItemInInvetory(std::string a_value);

    void ShowInventory();
    
    std::map<std::string, Item*> GetInventory();
    
private:
    std::map<std::string, Item*> inventory;
    
};
