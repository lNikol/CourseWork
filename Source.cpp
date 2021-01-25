#include "lib.h"
#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	//Warrior knight("Knight", 1000, 300, 1, 100);
	//Warrior paladin("Paladin", 800, 200, 1.5, 300);
	//while (knight.getHP() >= 0 && paladin.getHP() >= 0) {
	//	//knight.attack(paladin);
	//	//ğûöàğü íàíîñèò óäàğ ïàëàäèíó
	//	cout << "Knight attack Paladin :" << endl;
	//	float damage = knight.getDamage();
	//	float armor = paladin.getArmor();
	//	float part = armor / 1000;
	//	float pdamage = damage * (1 - part);
	//	float hp = paladin.getHP();
	//	hp = hp - pdamage;
	//	paladin.setHP(hp);
	//	paladin.showStatus();
	//	Sleep(1000);

	//	cout << "Paladin attack Knight :" << endl;
	//	damage = paladin.getDamage();
	//	armor = knight.getArmor();
	//	part = armor / 1000;
	//	pdamage = damage * (1 - part);
	//	hp = knight.getHP();
	//	hp = hp - pdamage;
	//	knight.setHP(hp);
	//	knight.showStatus();
	//	Sleep(1000);

	//}
	//if (paladin.getHP() > 0) cout << "Paladin wins\n";
	//else
	//	if (knight.getHP() > 0) cout << "Knight wins\n";
	//	else cout << "Draw\n";
	//return 0;



	Healer Masha(1111);
	Masha.HealershowStatus();

	Warrior Maisey("Maisey", 1000, 100,100, 100/*, 100, 0*/);
	//Maisey.showStatus();

	Masha.SetPatientHeal(Maisey.getHP());
	Maisey.setHP(Masha.GetPatientHeal());
	Maisey.showStatus();

	Knight Zhenya(100);
	Zhenya.KnightshowStatus();

	Maisey.setDamage (Zhenya.getDamage());
	//Maisey.setEnergy(Maisey.getEnergy());



	Maisey.showStatus();
	Zhenya.SetUltDamage(Maisey.getHP(),Maisey.getArmor());
	Maisey.setHP(Zhenya.GetUltDamage());
	Maisey.showStatus();





	//Paladin Matvey(20);
	//Matvey.PaladinshowStatus();



	//FireMage Sasha(5);
	//Sasha.FireMageshowStatus();
}