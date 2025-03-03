#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
public:
    Weapon(const std::string& type);
    const std::string& getType();
    void setType(const std::string& type);

private:
    std::string type_;
};

#endif // WEAPON_HPP