#pragma once
#include <string>
class Monster {
private:
	//std::string MonsterName;
	float MonsterHP;
	float MonsterDamage;
	float MonsterArmor;
	float MonsterMagicResist;
	float MonsterFireResist;
	float MonsterColdResist;
	float MonsterWaterResist;
	float MonsterElectircResist;
	float MonsterPhysicalResist;
	float MonsterCritChance;
	float MonsterCritDamage;
public:

	enum Monsters1lvl {
		MONSTER_OGRE,
		MONSTER_GNOME,
		MONSTER_GOBLIN,
		MONSTER_BANSHEE,
	};

	enum Monsters2lvl {
		MONSTER_PEGASUS,
		MONSTER_DRUID,
		MONSTER_GRIFFON,
		MONSTER_HYDRA,
	};

	enum Monsters3lvl {
		MONSTER_BASILISK,
		MONSTER_PHOENIX,
		MONSTER_CHIMERA,
	};

	enum Monsters4lvl {
		MONSTER_VALKYRIE,
		MONSTER_CERBERUS,
	};

	enum Monsters5lvl {//Мини-боссы
		MONSTER_ANGEL,
		MONSTER_DEVIL,
		MONSTER_VAMPIRE,
		MONSTER_DRAGON,
	};

	enum Bosses {
		MONSTER_GOD,
		MONSTER_SATAN,
	};
	Monsters1lvl Get_NameMonster1lvl();
	Monsters2lvl Get_NameMonster2lvl();
	Monsters3lvl Get_NameMonster3lvl();
	Monsters4lvl Get_NameMonster4lvl();
	Monsters5lvl Get_NameMonster5lvl();
	Bosses Get_BossName();
	
	
	Monster();
	
	
	
	Monster(std::string, float, float, float, float,
		float, float, float, float, float, float, float);
	//std::string GetMonsterName();
	float GetMonsterHP();
	float GetMonsterDamage();
	float GetMonsterArmor();
	float GetMonsterMagicResist();
	float GetMonsterFireResist();
	float GetMonsterColdResist();
	float GetMonsterWaterResist();
	float GetMonsterElectircResist();
	float GetMonsterPhysicalResist();
	float GetMonsterCritChance();
	float GetMonsterCritDamage();
	
	
	//std::string SetMonsterName();
	void SetMonsterHP(float);
	void SetMonsterDamage(float);
	void SetMonsterArmor(float);
	void SetMonsterMagicResist(float);
	void SetMonsterFireResist(float);
	void SetMonsterColdResist(float);
	void SetMonsterWaterResist(float);
	void SetMonsterElectircResist(float);
	void SetMonsterPhysicalResist(float);
	void SetMonsterCritChance(float);
	void SetMonsterCritDamage(float);
	void showStatus();



};