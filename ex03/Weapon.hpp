#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class Weapon
{
    private:
    std::string _type;

    public:
    Weapon(std::string);
    ~Weapon();

    //getter
    //funkce nam vrati pohled (const) na originalni text, ktery nesmime menit, funkci volam napr.mojeZbran.getType()
    //atribut type je v private a pomoci getType se muzeme do toho atributu podivat 
    const std::string& getType() const;

    //setter
    //this metod can change type of the weapon
    void setType(std::string newType);

};


#endif