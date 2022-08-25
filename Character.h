#pragma once
#include <iostream>

class Character
{
public:
	std::string mName;
	int mMaxHP;
	int mHP;
	int mAttack;

	Character(std::string name, int maxHP, int attack);
	~Character()
	{
	}
	void DisplayHealth();

	virtual void Attack(Character& e1, Character& e2);
};

class Enemy : public Character
{
public:
	Enemy(std::string name, int maxHP, int attack);
	~Enemy()
	{
	}
	void Attack(Character& e1, Character& e2);
};

class Player : public Character
{
public:
	Player(std::string name, int maxHP, int attack);
	~Player()
	{
	}
	void Attack(Character& e1, Character& e2);
};