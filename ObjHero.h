#pragma once
#include "GameL\SceneManager.h"
using namespace GameL;

class CObjHero :public CObj
{
public:
	CObjHero() {};
	~CObjHero() {};
	void Init();//�C�j�V�����C�Y
	void Action();//�A�N�V����
	void Draw();//�h���[
private:
};