#include "Map.h"
#include <fstream>
#include <vector>

#include "Location.h"
#include "Item.h"

Map::Map(std::string a_file)
{
    std::string fileLine;
    std::ifstream mapFile(a_file);
    
    if (mapFile.is_open())
    {
        while (std::getline(mapFile, fileLine, '\n'))
        {
            if (fileLine.empty())
            {
                continue;
            }
            locationInformation.push_back(fileLine);
        }
    }
    
    CreateLocations();
}

std::vector<Location*> Map::GetMapLocations()
{
    return LocationsArray;
}

void Map::CreateLocations()
{
    int informationSize = 3;
    std::vector<std::string> information;
    for (int i = 0; i < locationInformation.size(); i += informationSize)
    {
        Location* newLocation = new Location(locationInformation[i], locationInformation[i + 1], locationInformation[i + 2]);
        LocationsArray.push_back(newLocation);
    }
}