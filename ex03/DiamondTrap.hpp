/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:55:35 by clouden           #+#    #+#             */
/*   Updated: 2026/06/02 21:59:01 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name_;
public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& diam);
	DiamondTrap	&operator=(const DiamondTrap& diam);
	~DiamondTrap(void);

	void	attack(const std::string& target);
	void	whoami();
};

#endif
