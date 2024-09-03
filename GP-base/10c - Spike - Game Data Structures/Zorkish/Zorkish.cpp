#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include "Location.h"
#include "Map.h"
#include "Player.h"
#include "Movement.h"

int main(int argc, char* argv[])
{
    Movement* MovementInput = new Movement();
    
    Item* PlayerLetter = new Item();
    Inventory* PlayerInventory = new Inventory();
    PlayerInventory->AddItemToInventory("Letter", PlayerLetter);
    Map* GameMap = new Map("Locations.txt");
    std::vector<Location*> locations = GameMap->GetMapLocations();
    Player* PlayerCharacter = new Player(locations[0], PlayerInventory);

    std::string MovementText;
    while (true)
    {
        std::cin >> MovementText;
        MovementInput->ChangeLocations(MovementText);
    }
    
    std::cout << PlayerCharacter->GetCurrentLocation()->GetLocationName() << "\n";
    PlayerInventory->ShowInventory();
    
    return 0;
}