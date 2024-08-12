#include "Movement.h"
#include <iostream>
#include "Player.h"

void Movement::Move(char aDirection, Player* aPlayer)
{
    switch (tolower(aDirection))
    {
        case 's':
            std::cout << "Moved South" << "\n";
            aPlayer->SetPlayerLocation(aPlayer->GetPlayerLocation().first + 1, aPlayer->GetPlayerLocation().second);
            break;
        case 'n':
            std::cout << "Moved North" << "\n";
            aPlayer->SetPlayerLocation(aPlayer->GetPlayerLocation().first - 1, aPlayer->GetPlayerLocation().second);
            break;
        case 'e':
            std::cout << "Moved East" << "\n";
            aPlayer->SetPlayerLocation(aPlayer->GetPlayerLocation().first, aPlayer->GetPlayerLocation().second + 1);
            break;
        case 'w':
            std::cout << "Moved West" << "\n";
            aPlayer->SetPlayerLocation(aPlayer->GetPlayerLocation().first, aPlayer->GetPlayerLocation().second - 1);
            break;
        default:
            std::cout << "Incorrect Input, use <N, S, E, W>" << "\n";
            break;
    }
}