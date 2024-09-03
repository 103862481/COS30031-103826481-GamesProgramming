#include "Movement.h"
#include <iostream>


void Movement::ChangeLocations(std::string a_MovementText)
{
    std::string MovementWord = a_MovementText.substr(0, a_MovementText.find(" "));

    for (const auto& Word : MoveWords.MoveWords)
    {
        if (MovementWord == Word)
        {
            std::cout << "Moving" << "\n";
        }
    }
}