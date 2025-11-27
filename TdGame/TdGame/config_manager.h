#ifndef _CONFIG_MANAGER_H_
#define _CONFIG_MANAGER_H_
#include "map.h"
#include "wave.h"
#include "manager.h"
#include<SDL.h>
#include<cJSON.h>
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>

class ConfigManager:public Manager<ConfigManager>
{
	friend class Manager<ConfigManager>;
public:
	struct BaseTemplate
	{
		std::string windows_tile = u8"´å×¯±£ÎÀÕ½";
		int window_width = 1280;
		int window_height = 720;
	};

	struct PlayerTempalte
	{
		double speed = 3;
		double normal_attack_interval = 0.5;
		double normal_attack_damage = 0;
		double skill_interval = 10;
		double skill_damage = 1;
	};

	struct TowerTemplate
	{
		double interval[10] = { 1 };
		double damage[10] = { 25 };
		double view_ranage[10] = { 5 };
		double cost[10] = { 50 };
		double upgrate_cost[9] = { 75 };
	};

	struct EnemyTemplate
	{
		double hp = 100;
		double speed = 1;
		double damage = 1;
		double reward_ratio = 0.5;
		double recover_interval = 10;
		double recover_range = 0;
		double recover_intensity = 25;
	};

public:
	Map map;
	std::vector<Wave> wave_list;
protected:
	ConfigManager() = default;
	~ConfigManager() = default;
};

#endif // !_CONFIG_MANAGER_H_

