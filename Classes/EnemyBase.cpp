/**************************************************
	EnemyBase.cpp

	Robert	2014/09/10
**************************************************/
#include "EnemyBase.h"

EnemyBase::EnemyBase()
{
}

EnemyBase::~EnemyBase()
{
}

bool EnemyBase::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	return true;
}

Animation* EnemyBase::createAnimation(std::string prefixName, int framesNum, float delay)
{
	Vector<SpriteFrame*> animFrames;

	for (int i = 1; i <= framesNum; )
	{
	}
}