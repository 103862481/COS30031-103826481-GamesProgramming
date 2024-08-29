#include "Location.h"
#include "Item.h"
#include <sstream>
#include <iostream>


Location::Location()
{
    locationName = "Default Location yet to be made";
    locationDescription = "A Location yet to be created";

    Item* newItem = new Item();
    locationItems.push_back(newItem);

    
}

Location::Location(std::string a_locationName, std::string a_locationDescription, std::string a_locationConnections)
{
    locationName = a_locationName;
    locationDescription = a_locationDescription;
    CreateConnections(a_locationConnections);
}

std::string Location::GetLocationName()
{
    return locationName;
}

std::string Location::GetLocationDescription()
{
    return locationDescription;
}

std::vector<std::string> Location::GetLocationConnections()
{
    return locationConnections;
}

void Location::CreateConnections(std::string a_locationConnections)
{
    std::istringstream ConnectionStream(a_locationConnections);
    std::string ConnectionName;

    while (std::getline(ConnectionStream, ConnectionName, ' '))
    {
        locationConnections.push_back(ConnectionName);
    }
}