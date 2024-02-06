/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:40:16 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/29 02:29:22 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*Constructors & Destructor*/

FragTrap::FragTrap() : ClapTrap("DefFragTrap")
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

/*Assignment operator*/

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	return *this;
}

/*Member Function*/

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " requests a noice high five!" << std::endl;
}
