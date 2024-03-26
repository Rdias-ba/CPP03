/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:27:14 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/26 00:13:26 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Claptrap;
	ClapTrap Bob("Bob");
	ClapTrap Franc("Franc");

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

	return (0);
}