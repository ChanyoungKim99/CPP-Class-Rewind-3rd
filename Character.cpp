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
	std::cout << e1.mName << "��(��) " << e2.mName << "��(��) �����ߴ�!" << std::endl;
	e2.mHP = e2.mHP - e1.mAttack;
}

Enemy::Enemy(std::string name, int maxHP, int attack) : Character(name, maxHP, attack)
{
}

void Enemy::Attack(Player& p)
{
	std::cout << mName << "��(��) " << p.mName << "��(��) �����ߴ�!" << std::endl;
	p.mHP = p.mHP - mAttack;
}

Player::Player(std::string name, int maxHP, int attack) : Character(name, maxHP, attack)
{
}

void Player::Attack(Enemy& e)
{
	std::cout << mName << "��(��) " << e.mName << "��(��) �����ߴ�!" << std::endl;
	e.mHP = e.mHP - mAttack;
}
