/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:36:12 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/29 02:06:15 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*Constructors & Destructor*/

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "ClapTrap copy constructor called for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << name << std::endl;
}

/*Assignment operator*/

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
		std::cout << "ClapTrap assignment operator called for " << name << std::endl;
	}
	return *this;
}

/*Member Functions*/

void ClapTrap::attack(const std::string &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " can't attack. Not enough hit points or energy points." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount)
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
		hitPoints -= amount;
	}
	else
	{
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " is already defeated. Can't take more damage." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " can't be repaired. Not enough hit points or energy points." << std::endl;
	}
}
