#pragma once
#include <iostream>
#include <string>
using namespace std;

class Enemy
{
private:
	int damage;
	string warcry;
public:
	Enemy()
	{
		setDamage(10);
		setWarcry("Roar");
	}
	~Enemy(){}

	void setDamage(int damage) { this->damage = damage; }
	int getDamage(){ return damage; }
	
	void setWarcry(string warcry) { this->warcry = warcry; }
	string getWarcry() { return warcry; }
	
	 virtual void Attack()
	{
		cout << getWarcry() << endl << "Deal " << getDamage() << " damage to opponent" << endl;
	}
};

class Skeleton : public Enemy
{
public:
	Skeleton() : Enemy()
	{
		setWarcry(getWarcry() + " Hssssssss");
	}
	~Skeleton(){}

	void Attack()
	{
		Enemy::Attack();
		cout << "Deal " << getDamage() << " damage to opponent" << endl;
	}
};

class Troll : public Enemy
{
public:
	Troll() : Enemy()
	{
		setDamage(getDamage() * 1.5);
		setWarcry(getWarcry() + " Grrrrrr");
	}
	~Troll(){}
};

class Orc : public Enemy
{
public:
	Orc() : Enemy()
	{
		setDamage(getDamage() * 2);
		setWarcry(getWarcry() + " AHHHHHHHHH");
	}
	~Orc(){}

	void Attack()
	{
		Enemy::Attack();
		Enemy::Attack();
	}
};

class DarkOrc : public Orc
{
private:
	string magic;
	string cast;
public:
	DarkOrc()
	{
		setMagic("Summons undead");
		setCast("ABRA CADABRA");
	}
	~DarkOrc(){}

	void setMagic(string magic) { this->magic = magic; }
	string getMagic() { return magic; }
	
	void setCast(string cast) { this->cast = cast; }
	string getCast() { return cast; }
	
	void Attack()
	{
		cout << getCast() << endl << getMagic() << endl;
	}
};