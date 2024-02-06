/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:36:18 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/29 02:25:38 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	// Creating ClapTrap instance
	ClapTrap clapTrap("CLAP1");
	clapTrap.attack("Daemon1");
	clapTrap.takeDamage(2);
	clapTrap.beRepaired(3);

	std::cout << std::endl;

	// Creating ScavTrap instance
	ScavTrap scavTrap("SCAV1");
	scavTrap.attack("Daemon2");
	scavTrap.takeDamage(17);
	scavTrap.beRepaired(9);
	scavTrap.guardGate();

	return 0;
}

/* Main 2 for more testing*/

// int main(void)
// {
// 	ScavTrap scavTrap("SCAV1");
// 	ScavTrap scav1;
// 	scav1 = scavTrap;
// 	scavTrap.takeDamage(90);
// 	scavTrap.beRepaired(90);
// 	scavTrap.takeDamage(99);
// 	scavTrap.takeDamage(1);
// 	scavTrap.guardGate();

// 	std::cout << std::endl;

// 	for(int a = 0; a < 5; ++a)
// 		scav1.attack("object");
// 	return 0;
// }
