/*******************************
	LevelInfoScene.cpp

	Robert		2014/09/09


*******************************/
#include "LevelInfoScene.h"
#include "Thief.h"

LevelInfoScene::LevelInfoScene()
{
}

LevelInfoScene::~LevelInfoScene()
{
}

bool LevelInfoScene::init()
{
	if (!Layer::init())
	{
		return false;
	}

	//Test
	Size size = Director::getInstance()->getWinSize();
	Vector<Node*> vec;
	Thief* pThief = Thief::createThief(vec, 100);
	addChild(pThief);
	pThief->setPosition(size.width / 2, size.height / 2);
	//pThief->runAction(Animate::create(AnimationCache::getInstance()->getAnimation("runright1")));

	return true;
}