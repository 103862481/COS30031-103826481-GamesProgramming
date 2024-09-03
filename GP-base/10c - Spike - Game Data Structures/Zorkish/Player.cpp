#include "Player.h"

#include "Inventory.h"

Player::Player(Location* a_startingLocation, Inventory* a_playerInventory)
{
    CurrentLocation = a_startingLocation;
    PlayerInventory = a_playerInventory;
}

Location* Player::GetCurrentLocation()
{
    return CurrentLocation;
}

void Player::SeeInventory()
{
    PlayerInventory->ShowInventory();
}

void Player::ChangeLocations(Location* a_newLocation)
{
    CurrentLocation = a_newLocation;
}
