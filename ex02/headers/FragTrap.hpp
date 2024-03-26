/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 00:57:52 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/26 00:59:01 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &base);
		FragTrap &operator=(const FragTrap &base);
		~FragTrap();

		void highFivesGuys(void);
};

#endif