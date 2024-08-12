#include "Map.h"
#include <iostream>

#include "Player.h"

Map::Map(Player* aPlayer)
{
    playerCharacter = aPlayer;
    GeneratedMap = GenerateMap();
}

void Map::ShowMap()
{
    for (int i = 0; i < GeneratedMap.size(); i++)
    {
        for (int j = 0; j < GeneratedMap[i].size(); j++)
        {
            if (i == playerCharacter->GetPlayerLocation().first && j == playerCharacter->GetPlayerLocation().second)
            {
                if (GeneratedMap[i][j] == 'X')
                {
                    std::cout << "You found the treasure, you win!" << '\n';
                    bFoundTreasure = true;
                    return;
                }
            }

            if (i == playerCharacter->GetPlayerLocation().first && j == playerCharacter->GetPlayerLocation().second)
            {
                if (GeneratedMap[i][j] == 'D')
                {
                    std::cout << "You Died" << '\n';
                    bDied = true;
                    return;
                }
            }
            
            if (i == playerCharacter->GetPlayerLocation().first && j == playerCharacter->GetPlayerLocation().second)
            {
                if (GeneratedMap[i][j] == '#')
                {
                    playerCharacter->SetPlayerLocation(playerCharacter->GetPreviousPlayerLocation().first, playerCharacter->GetPreviousPlayerLocation().second);
                }
            }
            
            if (i == playerCharacter->GetPreviousPlayerLocation().first && j == playerCharacter->GetPreviousPlayerLocation().second)
            {
                if (i == playerCharacter->GetPreviousPlayerLocation().first && j == playerCharacter->GetPreviousPlayerLocation().second)
                {
                    if (GeneratedMap[i][j] == 'P')
                    {
                        GeneratedMap[i][j] = ' ';
                    }
                }
            }
            
            if (i == playerCharacter->GetPlayerLocation().first && j == playerCharacter->GetPlayerLocation().second)
            {
                GeneratedMap[i][j] = 'P';
            }
            
            std::cout << GeneratedMap[i][j];
        }
        std::cout << "\n";
    }
}

std::vector<std::vector<char>> Map::GenerateMap()
{
    std::vector<std::vector<char>> Map =
    {
        {'#', '#', '#', '#', '#'},
        {'#', '#', 'X', '#', '#'},
        {'#', 'D', ' ', 'D', '#'},
        {'#', '#', ' ', '#', '#'},
        {'#', '#', ' ', '#', '#'},
        {'#', 'D', ' ', ' ', '#'},
        {'#', ' ', '#', ' ', '#'},
        {'#', ' ', 'S', ' ', '#'},
        {'#', '#', '#', '#', '#'}   
    };

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (Map[i][j] == 'S')
            {
                playerCharacter->SetPlayerLocation(i, j);
            }
        }
    }
    
    return Map;
}

void Map::ShowAvailableDirections()
{
    int playerX = playerCharacter->GetPlayerLocation().first;
    int playerY = playerCharacter->GetPlayerLocation().second;
    
    std::cout << "Available Directions: ";

    //Check North
    if (GeneratedMap[playerX + 1][playerY] != '#')
    {
        std::cout << "North ";
    }
    if (GeneratedMap[playerX - 1][playerY] != '#')
    {
        std::cout << "South ";
    }
    if (GeneratedMap[playerX][playerY + 1] != '#')
    {
        std::cout << "East ";
    }
    if (GeneratedMap[playerX][playerY - 1] != '#')
    {
        std::cout << "West ";
    }
}

bool Map::GetIsTreasureFound()
{
    return bFoundTreasure;
}

bool Map::GetIsDead()
{
    return bDied;
}
