#include "Character.h"

Character::Character(std::string name, int maxHP, int attack)
	: mName{ name }, mMaxHP{ maxHP }, mHP{ maxHP }, mAttack{ attack }
{
}

void Character::DisplayHealth()
{
	std::cout << mName << " : " << mHP << std::endl;
}

void Character::Attack(Character& e1, Character& e2)
{
	std::cout << e1.mName << "이(가) " << e2.mName << "을(를) 공격했다!" << std::endl;
	e2.mHP = e2.mHP - e1.mAttack;
}

Enemy::Enemy(std::string name, int maxHP, int attack) : Character(name, maxHP, attack)
{
}

void Enemy::Attack(Character& e1, Character& e2)
{
	std::cout << e1.mName << "이(가) " << e2.mName << "을(를) 공격했다!" << std::endl;
	e2.mHP = e2.mHP - e1.mAttack;
}

Player::Player(std::string name, int maxHP, int attack) : Character(name, maxHP, attack)
{
}

void Player::Attack(Character& e1, Character& e2)
{
	std::cout << e1.mName << "이(가) " << e2.mName << "을(를) 공격했다!" << std::endl;
	e2.mHP = e2.mHP - e1.mAttack;
}
