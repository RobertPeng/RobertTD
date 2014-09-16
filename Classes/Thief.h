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
};

#endif