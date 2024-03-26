/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:42:34 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/26 00:14:02 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("ClapTrap"), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Default constructor <" << Name << "> has been called!" << std::endl;
}

ClapTrap::ClapTrap(std::string Name): Name(Name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "String constructor <" << Name << "> has been called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &base)
{
	this->Name = base.Name;
	this->Hit_points = base.Hit_points;
	this->Energy_points = base.Energy_points;
	this->Attack_damage = base.Attack_damage;
	std::cout << "Copy constructor has been called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &base)
{
	if (this != &base)
	{
		this->Name = base.Name;
		this->Hit_points = base.Hit_points;
		this->Energy_points = base.Energy_points;
		this->Attack_damage = base.Attack_damage;
	}
	std::cout << "Copy assignment constructor has been called!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "Destructor has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Energy_points == 0)
	{
		std::cout << "ClapTrap " << this->Name << " is out of energy points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing " << Attack_damage << " point of damage!" << std::endl;
	this->Energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points <= amount || this->Hit_points == 0)
	{
		std::cout << "ClapTrap " << this->Name << " died" << std::endl;
		this->Hit_points = 0;
		return;
	}
	this->Hit_points -= amount;
	std::cout << "ClapTrap " << this->Name << " took " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points == 0)
	{
		std::cout << "ClapTrap is out of energy points!" << std::endl;
		return;
	}
	this->Hit_points += amount;
	this->Energy_points -= 1;
	std::cout << "ClapTrap " << this->Name << " has been repaired and gained " << amount << " hit points" << std::endl;
}