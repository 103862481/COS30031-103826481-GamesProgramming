#pragma once
#include <vector>

class Player;

class Map
{
public:
    Map(Player* aPlayer);
    ~Map() = default;

    void ShowMap(Player* aPlayer);
    void ShowAvailableDirections(Player* aPlayer);

    bool GetIsTreasureFound();
    bool GetIsDead();
    
private:
    std::vector<std::vector<char>> GenerateMap(Player* aPlayer);
    std::vector<std::vector<char>> GeneratedMap;

    bool bFoundTreasure = false;
    bool bDied = false;
};
