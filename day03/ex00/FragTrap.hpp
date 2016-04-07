// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:00 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 12:35:10 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {

private:

	int			hitPts;
	int			maxHitPts;
	int			energyPts;
	int			maxEnergyPts;
	int			level;
	int			meleeDmg;
	int			rangedDmg;
	int			armorDmgReduction;
	std::string name;

public:

	FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap(std::string name);
	~FragTrap();

	FragTrap & operator=(FragTrap const & src);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

	void setHitPts(int i);
	void setmaxHitsPts(int i);
	void setEnergyPts(int i);
	void setMaxEnergyPts(int i);
	void setLevel(int i);
	void setMeleeDmg(int i);
	void setRangedDmg(int i);
	void setArmorDmgReduction(int i);

	int	getHitPts();
	int	getMaxHitPts();
	int	getEnergyPts();
	int	getMaxEnergyPts();
	int	getLevel();
	int	getMeleeDmg();
	int	getRangedDmg();
	int	getArmorDmgReduction();
	std::string getName();
	
};

std::ostream & operator<<(std::ostream & o, FragTrap const & i);

#endif
