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
	Node* currPoint();
	Node* nextPoint();
	void runFollowPoint();
	void setPointsVector(Vector<Node*> points);
	void createAndSetHpBar();
	virtual void changeDirection(float ft) {};
	virtual void enemyExpload() {};

protected:
	int pointCounter;
	Sprite* sprite;
	Sprite* hpBgSprite;
	Animation *animationRight;
	Animation *animationLeft;
	Animation *animationExplode;
	CC_SYNTHESIZE_READONLY(ProgressTimer*, hpBar, HpBar);
	CC_SYNTHESIZE(float, hpPercentage, HpPercentage);
	CC_SYNTHESIZE(bool, enemySuccessful, EnemySuccessful);
	CC_SYNTHESIZE(float, runSpeed, RunSpeed);
	CC_SYNTHESIZE(float, value, Value);

private:
	Vector<Node*> pointsVector;
};

#endif