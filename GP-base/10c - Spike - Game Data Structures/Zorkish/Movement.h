#pragma once
#include <string>

class Player;
class Map;

struct CommandWords
{
    std::string MoveWords[4] = {"move", "go", "run", "walk"};
    std::string LookWords[4] = { "look", "see", "gander"};
};

class Movement
{
public:
    Movement(Map* a_Map, Player* a_Player);
    ~Movement() = default;
    void ChangeLocations(std::string a_MovementText);

private:

    CommandWords Commands;
    Map* MapLocations;
    Player* PlayerCharacter;

    bool bIsMoving;
    bool bIsLooking;
};
