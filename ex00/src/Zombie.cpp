/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:20:01 by seozkan           #+#    #+#             */
/*   Updated: 2023/05/24 13:43:04 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << _Name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_Name = name;
}

Zombie::Zombie()
{
    this->_Name = "Zombie";
}

Zombie::~Zombie()
{
    std::cout << _Name << " is dead (RIP)" << std::endl;
}