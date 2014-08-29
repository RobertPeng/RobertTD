/**************************************************
	LevelScene.h

	Robert	2014/08/29
**************************************************/
#ifndef __LEVELSCENE_H_
#define __LEVELSCENE_H_

#include "cocos2d.h"
USING_NS_CC;

class LevelScene : public Scene
{
public:
	LevelScene();
	virtual ~LevelScene();
	CREATE_FUNC(LevelScene);
	static LevelScene* getInstance();
	virtual bool init();

private:
	static LevelScene* instance;
};

#endif