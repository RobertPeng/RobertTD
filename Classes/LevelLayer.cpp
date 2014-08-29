/**************************************************
	LevelLayer.cpp

	Robert	2014/08/29
**************************************************/
#include "LevelLayer.h"

LevelLayer::LevelLayer()
{
}

LevelLayer::~LevelLayer()
{
}

bool LevelLayer::onTouchBegan(Touch* touch, Event* event)
{
	return true;
}

void LevelLayer::onTouchMoved(Touch* tcuch, Event* event)
{

}

void LevelLayer::onTouchEnded(Touch* tcuch, Event* event)
{

}

bool LevelLayer::init()
{
	if (!Layer::init())
	{
		return false;
	}
	auto touchListener = EventListenerTouchOneByOne::create();
	touchListener->setSwallowTouches(true);
	touchListener->onTouchBegan = CC_CALLBACK_2(LevelLayer::onTouchBegan, this);
	touchListener->onTouchMoved = CC_CALLBACK_2(LevelLayer::onTouchMoved, this);
	touchListener->onTouchEnded = CC_CALLBACK_2(LevelLayer::onTouchEnded, this);

	return true;
}
