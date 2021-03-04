#include "pch.h"
#include "Card.h"

Card::Card(std::string name, int attack, int defense, int damage, int heal, olc::Sprite sprite)
{
	_name = name;
	_attack = attack;
	_defense = defense;
	_damage = damage;
	_heal = heal;
	_sprite = sprite;
}

Card::~Card()
{

}

void Card::Draw(olc::PixelGameEngine engine, olc::vi2d position)
{
	//engine.DrawString()
}
