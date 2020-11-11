#include "Enemy.h"
#include <stdlib.h>
#include <time.h>

#define CREATE_SPAN 30

void Enemy::Init()
{
	srand((unsigned)time(NULL));
}

void Enemy::Update()
{

}

void Enemy::Draw()
{
}

void Enemy::Create()
{
	if (createTime++ >= CREATE_SPAN)
	{
		
	}
}

void Enemy::CheckLife()
{
}

void Enemy::Death(EnemyData enemy)
{

}


