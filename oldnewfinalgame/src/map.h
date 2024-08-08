#include <vector>

class Map{
private:
    string map[8][8] = {
        {"wa", "wa", "wa", "wa", "wa", "wa", "wa", "wa"},
        {"wa", "co", "co", "co", "mm", "ww", "ww", "wa"},
        {"wa", "co", "lt", "lt", "mm", "mm", "ww", "wa"},
        {"wa", "ss", "ss", "ss", "mm", "ca", "ww", "wa"},
        {"wa", "pa", "pa", "gm", "pe", "ca", "ca", "wa"},
        {"wa", "bb", "pa", "pe", "pe", "le", "le", "wa"}
        {"wa", "bb", "bb", "hp", "pe", "le", "le", "wa"}
        {"wa","wa", "wa", "wa", "wa", "wa", "wa", "wa"}
    }
    unordered_map<string, string> locationDescriptions = {
        {"co1", ""},
        {"co2", ""},
        {"co3", ""},
        {"co4", ""},
        {"lt1", ""},
        {"lt2", ""},
        {"ss1", ""},
        {"ss2", ""},
        {"ss3", ""},
        {"pa1", ""},
        {"pa2", ""},
        {"pa3", ""},
        {"bb1", ""},
        {"bb2", ""},
        {"bb3", ""},
        {"mm1", ""},
        {"mm2", ""},
        {"mm3", ""},
        {"mm4", ""},
        {"pe1", ""},
        {"pe2", ""},
        {"pe3", ""},
        {"pe4", ""},
        {"ww1", ""},
        {"ww2", ""},
        {"ww3", ""},
        {"ww4", ""},
        {"ca1", ""},
        {"ca2", ""},
        {"ca3", ""},
        {"le1", ""},
        {"le2", ""},
        {"le3", ""},
        {"le4", ""},
        {"gm", ""},
        {"hp", ""},
    }
    
    unordered_map<string, string> locationInteractions = {
        
    }

public:
    //TODO: implement location class
    void getLocation(Location location);
    void getLocationName(string mapLocation);
    
    }


