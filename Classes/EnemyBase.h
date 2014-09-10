/**************************************************
	EnemyBase.h

	Robert	2014/09/10
**************************************************/
#ifndef __ENEMYBASE_H_
#define __ENEMYBASE_H_

#include "cocos2d.h"
USING_NS_CC;

class EnemyBase : public Sprite
{
public:
	EnemyBase();
	virtual ~EnemyBase();
	virtual bool init() override;
	CREATE_FUNC(EnemyBase);
	Animation* createAnimation(std::string prefixName, int framesNum, float delay);

};

#endif