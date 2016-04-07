// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/07 12:04:00 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/07 16:17:08 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

protected:

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

	ClapTrap();
	ClapTrap(ClapTrap const & src);
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap & operator=(ClapTrap const & src);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

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
