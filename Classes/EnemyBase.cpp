/**************************************************
	EnemyBase.cpp

	Robert	2014/09/10
**************************************************/
#include "EnemyBase.h"

EnemyBase::EnemyBase()
{
	sprite = NULL;
	hpBgSprite = NULL;
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

	for (int i = 1; i <= framesNum; ++i)
	{
		char buffer[20] = {0};
		sprintf(buffer, "_%i.png", i);
		std::string str = prefixName + buffer;
		auto frame = SpriteFrameCache::getInstance()->getSpriteFrameByName(str);
		animFrames.pushBack(frame);
	}

	return Animation::createWithSpriteFrames(animFrames, delay);
}

void EnemyBase::createAndSetHpBar()
{
	hpBgSprite = Sprite::createWithSpriteFrameName("hpBg1.png");

}