#pragma once
#include <string>

struct MovementWords
{
    std::string MoveWords[4] = {"move", "go", "run", "walk"};
};

class Movement
{
public:
    Movement() = default;
    ~Movement() = default;
    void ChangeLocations(std::string a_MovementText);
private:

    MovementWords MoveWords;
};
