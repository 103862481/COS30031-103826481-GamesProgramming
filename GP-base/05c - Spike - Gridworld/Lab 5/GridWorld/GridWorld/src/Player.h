#pragma once
#include <vector>

class Player
{
public:
    Player() = default;
    ~Player() = default;

    std::pair<int, int> ShowPlayerLocation() const;

    void SetPlayerLocation(int ax, int ay);

    std::pair<int, int> GetPlayerLocation() const;
    std::pair<int, int> GetPreviousPlayerLocation() const;
    
private:
    std::pair<int, int> CurrentLocation;
    std::pair<int, int> PreviousLocation;
};
