#include <string>

inline const std::string& GetProjectDir()
{
    static std::string projectDir = "D:/dev/Mushroom/MushroomEngine/";
    return projectDir;
}
