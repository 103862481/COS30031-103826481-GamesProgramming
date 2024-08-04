#include "Player.h"

std::pair<int, int> Player::ShowPlayerLocation() const
{
    return CurrentLocation;
}

void Player::SetPlayerLocation(int ax, int ay)
{
    PreviousLocation = CurrentLocation;
    CurrentLocation = std::make_pair(ax, ay);
}

std::pair<int, int> Player::GetPlayerLocation() const
{
    return CurrentLocation;
}

std::pair<int, int> Player::GetPreviousPlayerLocation() const
{
    return PreviousLocation;
}