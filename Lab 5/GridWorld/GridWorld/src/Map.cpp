#include "Map.h"
#include <iostream>

#include "Player.h"

Map::Map(Player* aPlayer)
{
    GeneratedMap = GenerateMap(aPlayer);
}

void Map::ShowMap(Player* aPlayer)
{
    for (int i = 0; i < GeneratedMap.size(); i++)
    {
        for (int j = 0; j < GeneratedMap[i].size(); j++)
        {
            if (i == aPlayer->GetPlayerLocation().first && j == aPlayer->GetPlayerLocation().second)
            {
                if (GeneratedMap[i][j] == 'X')
                {
                    std::cout << "You found the treasure, you win!" << '\n';
                    bFoundTreasure = true;
                    return;
                }
            }

            if (i == aPlayer->GetPlayerLocation().first && j == aPlayer->GetPlayerLocation().second)
            {
                if (GeneratedMap[i][j] == 'D')
                {
                    std::cout << "You Died" << '\n';
                    bDied = true;
                    return;
                }
            }
            
            if (i == aPlayer->GetPlayerLocation().first && j == aPlayer->GetPlayerLocation().second)
            {
                if (GeneratedMap[i][j] == '#')
                {
                    aPlayer->SetPlayerLocation(aPlayer->GetPreviousPlayerLocation().first, aPlayer->GetPreviousPlayerLocation().second);
                }
            }
            
            if (i == aPlayer->GetPreviousPlayerLocation().first && j == aPlayer->GetPreviousPlayerLocation().second)
            {
                if (i == aPlayer->GetPreviousPlayerLocation().first && j == aPlayer->GetPreviousPlayerLocation().second)
                {
                    if (GeneratedMap[i][j] == 'P')
                    {
                        GeneratedMap[i][j] = ' ';
                    }
                }
            }
            
            if (i == aPlayer->GetPlayerLocation().first && j == aPlayer->GetPlayerLocation().second)
            {
                GeneratedMap[i][j] = 'P';
            }
            
            std::cout << GeneratedMap[i][j];
        }
        std::cout << "\n";
    }
}

std::vector<std::vector<char>> Map::GenerateMap(Player* aPlayer)
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
                aPlayer->SetPlayerLocation(i, j);
            }
        }
    }
    
    return Map;
}

void Map::ShowAvailableDirections(Player* aPlayer)
{
    int playerX = aPlayer->GetPlayerLocation().first;
    int playerY = aPlayer->GetPlayerLocation().second;
    
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
