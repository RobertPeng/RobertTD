/*******************************
	TowerBase.cpp

	Robert		2014/09/20


*******************************/
#include "TowerBase.h"

TowerBase::TowerBase()
{
	scope = 0;
	lethality = 0;
	towerValue = 0;
	rate = 0;
//	nearestEnemy = NULL;
}

TowerBase::~TowerBase()
{
}

bool TowerBase::init()
{
	return true;
}

void TowerBase::checkNearestEnemy()
{

}