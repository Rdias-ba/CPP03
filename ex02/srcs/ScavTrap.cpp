/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:47:47 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/26 00:36:19 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->Name = "ScavTrap";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap Default constructor has been called" << std::endl;
}


ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap String constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &base) : ClapTrap(base)
{
	this->Name = base.Name;
	this->Hit_points = base.Hit_points;
	this->Energy_points = base.Energy_points;
	this->Attack_damage = base.Attack_damage;
	std::cout << "ScavTrap Copy constructor has been called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &base)
{
	if (this != &base)
	{
		this->Name = base.Name;
		this->Hit_points = base.Hit_points;
		this->Energy_points = base.Energy_points;
		this->Attack_damage = base.Attack_damage;
	}
	std::cout << "ScavTrap Copy assignment constructor has been called!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap destructor has been called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Energy_points == 0)
	{
		std::cout << "ScavTrap " << this->Name << " is out of energy points!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->Name << " attacks " << target << " causing " << Attack_damage << " point of damage!" << std::endl;
	this->Energy_points -= 1;
}

void ScavTrap::guardGate(void) 
{
	std::cout << "ScarvTrap " << this->Name << " is now in Gate keeper mode" << std::endl;
}