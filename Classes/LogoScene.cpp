/**************************************************
	LogoScene.cpp

	Robert	2014/08/27
**************************************************/
#include "LogoScene.h"

LogoScene::LogoScene()
{
}

LogoScene::~LogoScene()
{
}

bool LogoScene::init()
{
	if ( !Layer::init() )
	{
		return false;
	}
	Size size = CCDirector::getInstance()->getWinSize();
	Sprite* pSprite = Sprite::create("playbg.png");
	pSprite->setPosition(size.width / 2, size.height / 2);
	addChild(pSprite, -1);

	return true;
}

Scene* LogoScene::createScene()
{
	Scene* pScene = Scene::create();
	LogoScene* pLayer = LogoScene::create();
	pScene->addChild(pLayer);

	return pScene;
}
