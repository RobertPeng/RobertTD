<<<<<<< HEAD
/**************************************************
	Thief.h

	Robert	2014/09/16
**************************************************/
=======
/*******************************
	Thief.h

	Robert		2014/09/20


*******************************/
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
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
<<<<<<< HEAD
	virtual bool init() override;
	static Thief* createThief(Vector<Node*> points, int hp);
	virtual void changeDirection(float dt);
	virtual void enemyExpload();

	//Test
	void TestRunAction(float dt);
=======
	static Thief* createThief(Vector<Node*> points, int hp);
	virtual bool init();
	virtual void changeDirection(float dt);
	virtual void enemyExploade();
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
};

class Pirate : public EnemyBase
{
public:
	Pirate();
	virtual ~Pirate();
<<<<<<< HEAD
	virtual bool init() override;
	static Pirate* createPirate(Vector<Node*> points, int hp);
	virtual void changeDirection(float dt);
	virtual void enemyExpload();
=======
	static Pirate* createPirate(Vector<Node*> points, int hp);
	virtual bool init();
	virtual void changeDirection(float dt);
	virtual void enemyExploade();
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
};

class Bandit : public EnemyBase
{
public:
	Bandit();
	virtual ~Bandit();
<<<<<<< HEAD
	virtual bool init() override;
	static Bandit* createBandit(Vector<Node*> points, int hp);
	virtual void changeDirection(float dt);
	virtual void enemyExpload();
=======
	static Bandit* createBandit(Vector<Node*> points, int hp);
	virtual bool init();
	virtual void changeDirection(float dt);
	virtual void enemyExploade();
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
};

#endif