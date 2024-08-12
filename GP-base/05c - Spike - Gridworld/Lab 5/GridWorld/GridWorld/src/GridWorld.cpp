
#include <iostream>
#include <ostream>
#include "Map.h"
#include "Movement.h"
#include "Player.h"

int main(int argc, char* argv[])
{
    Player* player = new Player();
    Map* LevelMap = new Map(player);
    Movement* playerMovement = new Movement();

    char Direction;
    
    while (!LevelMap->GetIsTreasureFound() && !LevelMap->GetIsDead())
    {
        system("cls");
        LevelMap->ShowMap();
        LevelMap->ShowAvailableDirections();
        
        Direction = std::cin.get();
        //Clears the input buffer (Removes the Enter).
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        playerMovement->Move(Direction, player);
    }
    
    return 0;
}
