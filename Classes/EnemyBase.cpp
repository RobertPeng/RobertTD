<<<<<<< HEAD
/**************************************************
	EnemyBase.cpp

	Robert	2014/09/10
**************************************************/
=======
/*******************************
	EnemyBase.cpp

	Robert		2014/09/20


*******************************/
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
#include "EnemyBase.h"

EnemyBase::EnemyBase()
{
	pointCounter = 0;
<<<<<<< HEAD
	sprite = NULL;
	hpBgSprite = NULL;
	animationRight = NULL;
	animationLeft = NULL;
	animationExplode = NULL;
	hpBar = NULL;
	hpPercentage = 0;
	enemySuccessful = false;
	runSpeed = 0;
	value = 0;
	maxHp = 0;
	currHp = 0;
=======
	animationRight = NULL;
	animationLeft = NULL;
	animationExplode = NULL;
	runSpeed = 0;
	maxHp = 0;
	vaule = 0;
	currHp = 0;
	hpPercentage = 0;
	hpBar = NULL;
	enemySuccessful = false;
	sprite = NULL;
	hpBgSprite = NULL;
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
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
<<<<<<< HEAD
=======

>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
	return true;
}

Animation* EnemyBase::createAnimation(std::string prefixName, int framesNum, float delay)
{
	Vector<SpriteFrame*> animFrames;
<<<<<<< HEAD

=======
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
	for (int i = 1; i <= framesNum; ++i)
	{
		char buffer[20] = {0};
		sprintf(buffer, "_%i.png", i);
		std::string str = prefixName + buffer;
		auto frame = SpriteFrameCache::getInstance()->getSpriteFrameByName(str);
		animFrames.pushBack(frame);
	}
<<<<<<< HEAD

	return Animation::createWithSpriteFrames(animFrames, delay);
}

void EnemyBase::createAndSetHpBar()
{
	hpBgSprite = Sprite::createWithSpriteFrameName("hpBg1.png");
	hpBgSprite->setPosition(Point(sprite->getContentSize().width / 2, sprite->getContentSize().height ));
	sprite->addChild(hpBgSprite);

	hpBar = CCProgressTimer::create(Sprite::createWithSpriteFrameName("hp1.png"));
	hpBar->setType(ProgressTimer::Type::BAR);
	hpBar->setMidpoint(Point(0, 0.5f));
	hpBar->setBarChangeRate(Point(1, 0));
	hpBar->setPercentage(hpPercentage);
	hpBar->setPosition(Point(hpBgSprite->getContentSize().width / 2, hpBgSprite->getContentSize().height / 3 * 2 ));
	hpBgSprite->addChild(hpBar);
}

=======
	return Animation::createWithSpriteFrames(animFrames, delay);
}

>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
Node* EnemyBase::currPoint()
{
	if (pointsVector.size() > 0)
		return pointsVector.at(pointCounter);
<<<<<<< HEAD

	return NULL;
=======
	else
		return NULL;
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
}

Node* EnemyBase::nextPoint()
{
	int maxCount = pointsVector.size();
	pointCounter++;
	if (pointCounter < maxCount)
<<<<<<< HEAD
		return pointsVector.at(pointCounter);
=======
	{
		auto node = pointsVector.at(pointCounter);
		return node;
	}
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
	else
		setEnemySuccessful(true);
	return NULL;
}

void EnemyBase::runFollowPoint()
{
	auto temp = currPoint();
	sprite->setPosition(temp->getPosition());
	auto point = nextPoint();
<<<<<<< HEAD
	
=======

>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
	if (point != NULL)
	{
		auto duration = temp->getPosition().getDistance(point->getPosition()) / getRunSpeed();
		sprite->runAction(Sequence::create(MoveTo::create(duration, point->getPosition()),
										   CallFuncN::create(CC_CALLBACK_0(EnemyBase::runFollowPoint, this)),
										   NULL));
<<<<<<< HEAD

=======
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
	}
}

void EnemyBase::setPointsVector(Vector<Node*> points)
{
	pointsVector = points;
<<<<<<< HEAD
=======
}

void EnemyBase::createAndSetHpBar()
{
	hpBgSprite = Sprite::createWithSpriteFrameName("hpBg1.png");
	hpBgSprite->setPosition(Point(sprite->getContentSize().width / 2, sprite->getContentSize().height));
	sprite->addChild(hpBgSprite);
	hpBar = CCProgressTimer::create(Sprite::createWithSpriteFrameName("hp1.png"));
	hpBar->setType(ProgressTimer::Type::BAR);
	hpBar->setMidpoint(Point(0, 0.5f));
	hpBar->setBarChangeRate(Point(1, 0));
	hpBar->setPercentage(hpPercentage);
	hpBar->setPosition(Point(hpBgSprite->getContentSize().width / 2, hpBgSprite->getContentSize().height / 3 * 2));
	hpBgSprite->addChild(hpBar);
>>>>>>> 3a26e36edfe4a08ce73cd12cbce0fa4908eadcc9
}