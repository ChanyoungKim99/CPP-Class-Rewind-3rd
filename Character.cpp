#include "Character.h"

Character::Character(std::string name, int maxHP, int attack)
	: mName{ name }, mMaxHP{ maxHP }, mHP{ maxHP }, mAttack{ attack }
{
}

void Character::DisplayHealth()
{
	std::cout << mName << " : " << mHP << std::endl;
}

void Character::Attack(Enemy& e1, Enemy& e2)
{
	std::cout << e1.mName << "이(가) " << e2.mName << "을(를) 공격했다!" << std::endl;
	e2.mHP = e2.mHP - e1.mAttack;
}

Enemy::Enemy(std::string name, int maxHP, int attack) : Character(name, maxHP, attack)
{
}

void Enemy::Attack(Player& p)
{
	std::cout << mName << "이(가) " << p.mName << "을(를) 공격했다!" << std::endl;
	p.mHP = p.mHP - mAttack;
}

Player::Player(std::string name, int maxHP, int attack) : Character(name, maxHP, attack)
{
}

void Player::Attack(Enemy& e)
{
	std::cout << mName << "이(가) " << e.mName << "을(를) 공격했다!" << std::endl;
	e.mHP = e.mHP - mAttack;
}
