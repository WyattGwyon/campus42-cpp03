/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:23:31 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 16:49:15 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const std::string& name, const int hp, const int ep, const int ad);
	FragTrap(const FragTrap& frag);
	FragTrap	&operator=(const FragTrap& frag);
	~FragTrap(void);

	void	attack(const std::string& target);
	void	highFivesGuys(void);
};

#endif

