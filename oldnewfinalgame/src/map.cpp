#include <string>
#include "map.h"

//TODO: implement player
#include "player.h"

using namespace std;

void Map::getLocation(Location location) {
    return mapLocation = map[location.x][location.y];
}

void Map::getLocationName(Location location) {
    mapLocation = getLocationName(Location location);
    if (mapLocation.substr(0,3) == "wa") {
        return "Invalid Location";
    }
    else if (mapLocation.substr(0,2) == "pe") {
        return "Peanut Plots";
    }
    else if (mapLocation.substr(0,2) == "ss") {
        return "Strawberry Streets";
    }
    else if (mapLocation.substr(0,2) == "lt") {
        return "Lettuce Lawn";
    }
    else if (mapLocation.substr(0,2) == "bb") {
        return "Bean Block";
    }
    else if (mapLocation.substr(0,2) == "pa") {
        return "Papaya Preserves";
    }
    else if (mapLocation.substr(0,2) == "ww") {
        return "Watermelon Woods";
    }
    else if (mapLocation.substr(0,2) == "co") {
        return "Cob County";
    }
    else if (mapLocation.substr(0,2) == "mm") {
        return "Melon Marsh";
    }
    else if (mapLocation.substr(0,2) == "ca") {
        return "Canteloupe County";
    }
    else if (mapLocation.substr(0,2) == "le") {
        return "Lemon Lots";
    }
    else if (mapLocation.substr(0,2) == "aa") {
        return "Apple Alleys";
    }
    else if (mapLocation.substr(0,2) == "gm") {
        return "Garden Mall";
    }
    else if (mapLocation.substr(0,2) == "hp") {
        return "Honey Palace";
    }

void Map::getLocationDesc(Location location) {
    return locationDescriptions[getLocationName(Location location)];
}


