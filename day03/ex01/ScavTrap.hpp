// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 14:22:52 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 14:25:57 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {

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

	ScavTrap();
	ScavTrap(ScavTrap const & src);
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & src);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);

	void Init();

	void setHitPts(int i);
	void setMaxHitPts(int i);
	void setEnergyPts(int i);
	void setMaxEnergyPts(int i);
	void setLevel(int i);
	void setMeleeDmg(int i);
	void setRangedDmg(int i);
	void setArmorDmgReduction(int i);

	int	getHitPts() const;
	int	getMaxHitPts() const;
	int	getEnergyPts() const;
	int	getMaxEnergyPts() const;
	int	getLevel() const;
	int	getMeleeDmg() const;
	int	getRangedDmg() const;
	int	getArmorDmgReduction() const;
	std::string getName() const;
	
};

#endif
