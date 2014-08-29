/**************************************************
	LevelScene.cpp

	Robert	2014/08/29
**************************************************/
#include "LevelScene.h"

LevelScene* LevelScene::instance;

LevelScene::LevelScene()
{
}

LevelScene::~LevelScene()
{
}

LevelScene* LevelScene::getInstance()
{
	if (instance != nullptr)
		return instance;

	return nullptr;
}

bool LevelScene::init()
{
	if (!Scene::init())
	{
		return false;
	}
	instance = this;
	Size size = Director::getInstance()->getWinSize();

	return true;
}