#pragma once
#include <vector>

class Player;

class Map
{
public:
    Map(Player* aPlayer);
    ~Map() = default;

    void ShowMap();
    void ShowAvailableDirections();

    bool GetIsTreasureFound();
    bool GetIsDead();
    
private:
    std::vector<std::vector<char>> GenerateMap();
    std::vector<std::vector<char>> GeneratedMap;

    bool bFoundTreasure = false;
    bool bDied = false;

    Player* playerCharacter;
};
