/**************************************************
	LevelSelectPage.cpp

	Robert	2014/09/09
**************************************************/
#include "LevelSelectPage.h"

#define LEVEL_ROW (3)
#define LEVEL_COL (2)

LevelSelectPage::LevelSelectPage()
{
}

LevelSelectPage::~LevelSelectPage()
{
}

bool LevelSelectPage::initLevelPage(const std::string& bgName, int level)
{
	if (!Node::init())
	{
		return false;
	}
	auto size = Director::getInstance()->getWinSize();
	auto sprite = Sprite::create(bgName);
	sprite->setPosition(Vec2(size.width / 2, size.height / 2));
	addChild(sprite, -2);

	Vector<MenuItem*> menuItemVector;
	auto buttonSize = Sprite::create("card_1.png")->getContentSize();
	auto gap = buttonSize.width / 4;
	auto startWidth = (size.width - LEVEL_ROW * buttonSize.width - (LEVEL_ROW - 1) * gap ) / 2;
	auto startHeight = ( size.height + (LEVEL_COL - 1) * gap + buttonSize.height * LEVEL_COL ) /2 - buttonSize.height;
	for (int row = 0; row < LEVEL_ROW; ++row)
	{
		auto height = startHeight - ( buttonSize.height + gap ) * row ;

	}
	return true;
}

LevelSelectPage* LevelSelectPage::create(const std::string& bgName, int level)
{
	return nullptr;
}

void LevelSelectPage::menuStartCallBack(Ref* pSender)
{

}