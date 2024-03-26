/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:27:14 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/26 00:48:56 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Claptrap;
	ScavTrap Bob("Bob");
	ScavTrap Franc("Franc");
	ScavTrap Boby(Bob);

	std::cout << std::endl;

	Bob.attack("Franc");
	Franc.takeDamage(5);

	std::cout << std::endl;

	Bob.attack("Franc");
	Franc.takeDamage(1);

	std::cout << std::endl;

	Bob.attack("Franc");
	Franc.takeDamage(1);

	std::cout << std::endl;

	Franc.beRepaired(7);

	std::cout << std::endl;

	Bob.attack("Franc");
	Franc.takeDamage(10);

	std::cout << std::endl;
	
	Franc.beRepaired(10);

	std::cout << std::endl;
	
	Bob.attack("Franc");
	Franc.takeDamage(9);

	std::cout << std::endl;
	
	Bob.attack("Franc");
	Franc.takeDamage(1);

	std::cout << std::endl;

	Franc.beRepaired(10);
	
	std::cout << std::endl;
	
	Bob.attack("Franc");
	Franc.takeDamage(1);

	std::cout << std::endl;
	
	Bob.attack("Franc");
	Franc.takeDamage(1);
	
	std::cout << std::endl;
	
	Bob.attack("Franc");
	Franc.takeDamage(1);
	
	std::cout << std::endl;
	
	Bob.attack("Franc");
	Franc.takeDamage(1);

	std::cout << std::endl;
	
	Bob.attack("Franc");

	std::cout << std::endl;

	Bob.guardGate();
	Franc.guardGate();

	std::cout << std::endl;

	return (0);
}