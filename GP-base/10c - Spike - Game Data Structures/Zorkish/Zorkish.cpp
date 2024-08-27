#include "Inventory.h"
#include "Item.h"

int main(int argc, char* argv[])
{
    Inventory playerInventory;
    Item* playerLetter = new Item();

    playerInventory.AddItemToInventory("Letter", playerLetter);
    playerInventory.ShowInventory();
    playerInventory.RemoveItemInInvetory("Letter");
    playerInventory.ShowInventory();
    
    return 0;
}
