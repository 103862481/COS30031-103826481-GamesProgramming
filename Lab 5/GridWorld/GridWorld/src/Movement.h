#pragma once

class Player;

class Movement
{
public:

    Movement() = default;
    ~Movement() = default;
    
    void Move(char aDirection, Player* aPlayer);
};
