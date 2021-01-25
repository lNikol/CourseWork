#include "lib.h"
#include <iostream>
#include <string>
Warrior::Warrior() :name(" "), hp(0), damage(0), pts(0), armor(0) {
	//name = " "; hp = 100; damage = 5; pts = 1; armor = 10;
}
Warrior::Warrior(std::string fname, float fhp, float fdamage,
	float fpts, float farmor):
	name(fname), hp(fhp), damage(fdamage), pts(fpts), armor(farmor) {}

std::string Warrior::getName() { return name; }
float Warrior::getHP() { return hp; }
float Warrior::getDamage() { return damage; }
float Warrior::getPts() { return pts; }
float Warrior::getArmor() { return armor; }
void Warrior::setName(std::string fname) { name = fname; }
void Warrior::setHP(float fhp) { hp = fhp; }
void Warrior::setDamage(float fdamage) {	
	damage = fdamage; }
void Warrior::setPts(float fpts) { pts = fpts; }
void Warrior::setArmor(float farmor) { armor = farmor; }
void Warrior::showStatus() {
	std::cout << "Name:" << name;
	std::cout << " HP:" << hp;
	std::cout << " Armor:" << armor;
	std::cout << " your damage:" << damage;
	std::cout << " attacks per second :" << pts;

}

//Knight::Knight() {
//
//}
//Knight::Knight() : AdditionalDamage(0) {
//
//}

Knight::Knight(float fAddictionalDamage) : AdditionalDamage(fAddictionalDamage) {}


void Knight::SetAdditionalDamage(float fAD) { AdditionalDamage=fAD; }

float Knight::GetAdditionalDamage() { return AdditionalDamage; }



void Knight::KnightshowStatus() {
	std::cout <<" AdditionalDamage: "<< AdditionalDamage << std::endl << std::endl;
}

float Knight::GetUltDamage() {
	float hp = Warrior::getHP();
	Warrior::setHP(hp);
	return hp;
}

void Knight::SetUltDamage(float fhp,float farmor) {
	float fult = GetAdditionalDamage()*3;
	//std::cout << fult << std::endl;
	float hp = fhp - (fult-farmor );
	std::cout << " UltDamage: "<<fult << std::endl;
	Warrior::setHP(hp);
}






Paladin::Paladin() : AdditionalArmor(0) {

}

Paladin::Paladin(double fAddictionalArmor) : AdditionalArmor(fAddictionalArmor) {}

void Paladin::SetAdditionalArmor(double fAA) { AdditionalArmor = fAA; }

double Paladin::GetAdditionalArmor() { return AdditionalArmor; }

void Paladin::PaladinshowStatus() {
	std::cout <<"AdditionalArmor: "<< AdditionalArmor << std::endl << std::endl;
}




Healer::Healer() : Heal(0) {

}
Healer::Healer(float fHeal) : Heal (fHeal) {}


void Healer::SetHeal(float fHeal) { Heal=fHeal; }

float Healer::GetPatientHeal() {
	float fhp = Warrior::getHP();
	float HP = fhp;
Warrior:: setHP(HP);
	return HP;
}

void Healer::SetPatientHeal(float fhp) {
	float HP = fhp+GetHeal();
	Warrior::setHP(HP);
	

}



float Healer::GetHeal() { return Heal; }

void Healer::HealershowStatus() {
	std::cout<<"Heal: " << Heal << std::endl << std::endl;
}




FireMage::FireMage() :Mana(0) {
}
FireMage::FireMage(double fMana) : Mana(fMana){}



void FireMage::SetMana(double fMana) { Mana = fMana; }

double FireMage::GetMana() { return Mana; }

void FireMage::FireMageshowStatus() {
	std::cout<<"Mana: " << Mana << std::endl << std::endl;
}

