#ifndef ENEMY_H_
#define ENEMY_H_

#include "../Common/Vec.h"
#include <list>

class Enemy
{
private:
	struct EnemyData
	{
		Vec2 pos;
		float lifespan;
	};

private:
	Enemy() { Init(); }
	~Enemy() {  }

public:
	void Init();
	void Update();	
	void Draw();

private:
	void Create();
	void CheckLife();
	void Death(EnemyData enemy);

	std::list<EnemyData> enemiesList;
	int createTime;
};


#endif