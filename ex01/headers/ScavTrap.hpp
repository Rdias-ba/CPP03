/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:33:45 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/26 00:20:27 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &base);
		ScavTrap &operator=(const ScavTrap &base);
		~ScavTrap();

		void attack(const std::string &target);
		void guardGate();
};

#endif