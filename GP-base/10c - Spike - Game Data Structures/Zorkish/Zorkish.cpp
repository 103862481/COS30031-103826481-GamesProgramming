#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include "Location.h"
#include "Map.h"

int main(int argc, char* argv[])
{
    Inventory playerInventory;
    Item* playerLetter = new Item();
    Location* NewLocation = new Location();
    Map* GameMap = new Map("Locations.txt");

    std::vector<Location*> locations = GameMap->GetMapLocations();

    for (Location*& location : locations)
    {
        std::cout << location->GetLocationName() << "\n";
        std::cout << location->GetLocationDescription() << "\n";
        for (auto& connections : location->GetLocationConnections())
        {
            std::cout << connections << "\n";
        }
    }
    
    playerInventory.AddItemToInventory("Letter", playerLetter);
    
    return 0;
}