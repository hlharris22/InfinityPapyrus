#pragma once

#include "olcPixelGameEngine.h"
#include <string>

class Card
{
	public:
		Card(std::string name, int attack, int defense, int damage, int heal, olc::Sprite sprite);
		~Card();
		void Draw(olc::PixelGameEngine engine, olc::vi2d position);

		std::string _name;
		int _attack;
		int _defense;
		int _damage;
		int _heal;

		/*std::string GetName();
		void SetName(std::string name);
		int GetAttack();
		void SetAttack(int attack);
		int GetDefense();
		void SetDefense(int attack);
		int GetDamage();
		void SetDamage(int attack);
		int GetHeal();
		void SetHeal(int attack);*/


	private:
		/*std::string _name;
		int _attack;
		int _defense;
		int _damage;
		int _heal;*/
		olc::Sprite _sprite;

};

