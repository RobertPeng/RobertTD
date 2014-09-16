/**************************************************
	Thief.cpp

	Robert	2014/09/16
**************************************************/
#include "Thief.h"

Thief::Thief()
{
}

Thief::~Thief()
{
}

bool Thief::init()
{
	if (!Sprite::init())
		return false;

	setRunSpeed(25);
	setValue(10);
	sprite = Sprite::createWithSpriteFrameName("enemyRight1_1.png");
	addChild(sprite);

	return true;
}

Thief* Thief::createThief(Vector<Node*> points, int hp)
{
	return NULL;
}

void Thief::changeDirection(float dt)
{
	auto curr = currPoint();
	if (curr == NULL)
	{
		return;
	}
	if (curr->getPositionX() > sprite->getPosition().x )
	{
		sprite->runAction(Animate::create(AnimationCache::getInstance()->getAnimation("runright1")));
	}
	else
	{
		sprite->runAction(Animate::create(AnimationCache::getInstance()->getAnimation("runleft1")));
	}
}

void Thief::enemyExpload()
{
	hpBgSprite->setVisible(false);
	sprite->stopAllActions();
	unschedule(schedule_selector(Thief::changeDirection));
	sprite->setAnchorPoint(Point(0.5f, 0.25f));
	sprite->runAction(Sequence::create(Animate::create(AnimationCache::getInstance()->getAnimation("explode1")),
									   CallFuncN::create(CC_CALLBACK_0(Thief::removeFromParent, this)),
									   NULL));
}