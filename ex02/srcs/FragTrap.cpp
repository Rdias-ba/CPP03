#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->Name = "FragTrap";
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap Default constructor has been called" << std::endl;
}


FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap String constructor has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &base) : ClapTrap(base)
{
	this->Name = base.Name;
	this->Hit_points = base.Hit_points;
	this->Energy_points = base.Energy_points;
	this->Attack_damage = base.Attack_damage;
	std::cout << "FragTrap Copy constructor has been called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &base)
{
	if (this != &base)
	{
		this->Name = base.Name;
		this->Hit_points = base.Hit_points;
		this->Energy_points = base.Energy_points;
		this->Attack_damage = base.Attack_damage;
	}
	std::cout << "FragTrap Copy assignment constructor has been called!" << std::endl;
	return *this;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap destructor has been called" << std::endl;
}

void FragTrap::highFivesGuys(void) 
{
	if (this->Energy_points == 0) 
	{
        std::cout << "FragTrap "<< this->Name << " is out of energy points!" << std::endl;
        return;
    }
	std::cout << "FragTrap " << this->Name << " says: High Fives!" << std::endl;
    this->Energy_points -= 1;
}