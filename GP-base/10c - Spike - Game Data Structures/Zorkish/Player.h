#pragma once

class Inventory;
class Location;

class Player
{
public:
    Player(Location* a_startingLocation, Inventory* a_playerInventory);
    ~Player() = default;

    Location* GetCurrentLocation();
    void SeeInventory();
    
    void ChangeLocations(Location* a_newLocation);
    
private:

    Location* CurrentLocation;
    Inventory* PlayerInventory;
};
