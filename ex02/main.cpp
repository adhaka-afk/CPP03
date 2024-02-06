/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:40:25 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/29 02:28:30 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	// Creating ClapTrap instance
	ClapTrap clapTrap("CLAP1");
	clapTrap.attack("Daemon1");
	clapTrap.takeDamage(4);
	clapTrap.beRepaired(2);

	std::cout << std::endl;

	// Creating FragTrap instance
	FragTrap fragTrap("FRAG1");
	fragTrap.attack("Daemon3");
	fragTrap.takeDamage(19);
	fragTrap.beRepaired(14);
	fragTrap.highFivesGuys();

	return 0;
}

/* Main 2 for more testing*/

// int main(void)
// {
// 	FragTrap fragTrap("FRAG1");
// 	FragTrap frag1;
// 	frag1 = fragTrap;
// 	fragTrap.takeDamage(90);
// 	fragTrap.beRepaired(90);
// 	fragTrap.takeDamage(99);
// 	fragTrap.takeDamage(1);
// 	fragTrap.highFivesGuys();

// 	std::cout << std::endl;

// 	for(int a = 0; a < 5; ++a)
// 		frag1.attack("immovableobject");
// 	return 0;
// }
