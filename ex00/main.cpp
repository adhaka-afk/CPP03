/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:34:34 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/29 02:22:29 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("CLap00");
	ClapTrap clap01;
	clap01 = clapTrap;
	std::cout << std::endl;

	// Test damage and repair
	clapTrap.takeDamage(5);
	ClapTrap clap02(clapTrap);
	clapTrap.beRepaired(5);
	clapTrap.takeDamage(9);
	clapTrap.takeDamage(1);
	clap02.takeDamage(1);
	std::cout << std::endl;

	// Test attack
	for (int a = 0; a < 11; ++a)
	{
		clap01.attack("Object");
	}
	std::cout << std::endl;

	return 0;
}
