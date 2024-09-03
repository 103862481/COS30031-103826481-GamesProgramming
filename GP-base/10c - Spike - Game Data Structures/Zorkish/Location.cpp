#include "Location.h"
#include "Item.h"
#include <sstream>
#include <iostream>


Location::Location()
{
    LocationName = "Default Location yet to be made";
    LocationDescription = "A Location yet to be created";
}

Location::Location(std::string a_locationName, std::string a_locationDescription, std::string a_locationConnections)
{
    LocationName = a_locationName;
    LocationDescription = a_locationDescription;
    CreateConnections(a_locationConnections);
}

std::string Location::GetLocationName() const
{
    return LocationName;
}

std::string Location::GetLocationDescription() const
{
    return LocationDescription;
}

std::vector<std::string> Location::GetLocationConnections() const
{
    return LocationConnections;
}

void Location::CreateConnections(std::string a_locationConnections)
{
    std::istringstream ConnectionStream(a_locationConnections);
    std::string ConnectionName;

    while (std::getline(ConnectionStream, ConnectionName, ' '))
    {
        LocationConnections.push_back(ConnectionName);
    }
}