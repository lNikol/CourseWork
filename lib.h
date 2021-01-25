#pragma once
#include <string>
class Warrior {
private:
	std::string name;
	float hp;
	float damage;
	float pts;
	float armor;
public:
	Warrior();
	Warrior(std::string, float, float, float, float);
	std::string getName();
	float getHP();
	float getDamage();
	float getPts();
	float getArmor();
	void setName(std::string);
	void setHP(float);
	void setDamage(float);
	void setPts(float);
	void setArmor(float);
	void showStatus();
};

class Knight :public Warrior {
private:
	float AdditionalDamage;


public:
	Knight();
	Knight(float);
	
	
	void SetAdditionalDamage(float);

	float GetAdditionalDamage();


	void SetUltDamage(float,float);

	float GetUltDamage();



	void KnightshowStatus();

};


class Paladin :public Warrior {
private:
	double AdditionalArmor;


public:
	Paladin();
	Paladin(double);
	void SetAdditionalArmor(double);
	double GetAdditionalArmor();
	void PaladinshowStatus();

};


class Healer :public Warrior {
private:

public:
	float Heal;

	Healer();
	Healer(float);


	void SetHeal(float);


	void SetPatientHeal(float);

	float GetPatientHeal();


	float GetHeal();


	void HealershowStatus();

};


class FireMage :public Warrior{
private:
	double Mana;
public:
	FireMage();
	FireMage(double);
	
	void SetMana(double);

	double GetMana();




	void FireMageshowStatus();



};