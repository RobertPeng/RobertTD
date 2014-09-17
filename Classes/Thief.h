/**************************************************
	Thief.h

	Robert	2014/09/16
**************************************************/
#ifndef __THIEF_H_
#define __THIEF_H_

#include "cocos2d.h"
#include "EnemyBase.h"
USING_NS_CC;

class Thief : public EnemyBase
{
public:
	Thief();
	virtual ~Thief();
	virtual bool init() override;
	static Thief* createThief(Vector<Node*> points, int hp);
	virtual void changeDirection(float dt);
	virtual void enemyExpload();

	//Test
	void TestRunAction(float dt);
};

class Pirate : public EnemyBase
{
public:
	Pirate();
	virtual ~Pirate();
	virtual bool init() override;
	static Pirate* createPirate(Vector<Node*> points, int hp);
	virtual void changeDirection(float dt);
	virtual void enemyExpload();
};

class Bandit : public EnemyBase
{
public:
	Bandit();
	virtual ~Bandit();
	virtual bool init() override;
	static Bandit* createBandit(Vector<Node*> points, int hp);
	virtual void changeDirection(float dt);
	virtual void enemyExpload();
};

#endif